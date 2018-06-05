// Copyright 2018 Razumova Maria

#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <sstream>

#include "include/two-lines-options.h"
#include "include/two_lines.h"

TwoLinesOptions::TwoLinesOptions() : message_("") {}

void TwoLinesOptions::help(const char * appname, const char * message) {
    message_ =
            std::string(message) +
            "This is a two-lines application.\n\n" +
            "Please provide arguments in the following format:\n\n" +
            "  $ " + appname + "<x11> <y11> <x12> <y12>" +
            "<x21> + <y211> + <x22> + <y22>" +
            "Where all arguments are double-precision numbers";
}

bool TwoLinesOptions::validateNumberOfArguments(int argc,
    const char ** argv) {
    if (argc == 1) {
        help(argv[0]);
        return false;
    } else if (argc != 9) {
        help(argv[0], "ERROR: Should be 8 arguments.\n\n");
        return false;
    }
    return true;
}

double parseDouble(const char* arg) {
    char* end;
    double value = strtod(arg, &end);

    if (end[0]) {
        throw std::string("Wrong number format!");
    }

    return value;
}

int parseInt(const char* arg) {
    int value = std::stoi(std::string(arg));
    return value;
}

std::string TwoLinesOptions::operator ()(int argc, const char** argv) {
    Arguments args;
    std::ostringstream stream;

    if (!validateNumberOfArguments(argc, argv)) {
        return message_;
    }
    try {
        args.x11 = parseDouble(argv[1]);
        args.y11 = parseDouble(argv[2]);
        args.x12 = parseDouble(argv[3]);
        args.y12 = parseDouble(argv[4]);
        args.x21 = parseDouble(argv[5]);
        args.y21 = parseDouble(argv[6]);
        args.x22 = parseDouble(argv[7]);
        args.x22 = parseDouble(argv[8]);

    }
    catch(std::string& str) {
        return str;
    }

    LineSegment line1(Point(args.x11, args.y11), Point(args.x12, args.y12));
    LineSegment line2(Point(args.x21, args.y21), Point(args.x22, args.y22));

    if (line1.intersect (line2)) {
        stream  << "lines are intersect";
    } else {
        stream  << "lines are not intersect" ;
    }

    message_ = stream.str();
    return message_;
}
