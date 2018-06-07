// Copyright 2017 Razumova Maria

#ifndef MODULES_CHECK_LINE_SEGMENT_CROSS_INCLUDE_LINESEGMENT_OPTIONS_H_
#define MODULES_CHECK_LINE_SEGMENT_CROSS_INCLUDE_LINESEGMENT_OPTIONS_H_

#include <string>

class LinseSegmentOptions {
 public:
    LinseSegmentOptions();
    std::string operator()(int argc, const char** argv);

 private:
    void help(const char* appname, const char* message = "");
    bool validateNumberOfArguments(int argc, const char** argv);
    std::string message_;
    typedef struct {
        double x11;
        double y11;
        double x12;
        double y12;
        double x21;
        double y21;
        double x22;
        double y22;
    } Arguments;
};

#endif  // MODULES_CHECK_LINE_SEGMENT_CROSS_INCLUDE_LINESEGMENT_OPTIONS_H_
