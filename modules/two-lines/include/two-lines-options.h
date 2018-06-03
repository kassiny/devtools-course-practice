// Copyright 2017 Razumova Maria

#ifndef MODULES_TWO_LINES_INCLUE_TWO_LINES_OPTIONS_H_
#define MODULES_TWO_LINES_INCLUE_TWO_LINES_OPTIONS_H_

#include <string>

class TwoLinesOptions {
 public:
    TwoLinesOptions();
    std::string operator()(int argc, const char** argv);

 private:
    void help(const char* appname, const char* message = "");
    bool validateNumberOfArguments(int argc, const char** argv);
    std::string message_;
    typedef struct {
        double x1;
        double y1;
        double x2;
        double y2;
    } Arguments;
};

#endif  // MODULES_TWO_LINES_INCLUE_TWO_LINES_OPTIONS_H_
