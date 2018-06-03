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
            "<x21> + <y211> + <x22> + <y22" +
            "<output_file_name\n\n" +
            "Where all arguments are double-precision numbers";
}

bool TwoLinesOptions::ValidateNumberOfArguments(int argc,
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

std::string TwoLinesOptions::operator ()(int argc, const char** argv){

}


