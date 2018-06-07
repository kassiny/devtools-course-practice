// Copyright 2018 Razumova Maria

#include <cstdlib>
#include <cstdio>
#include <string>
#include <sstream>

#include "include/LineSegment_options.h"
#include "include/lineSegment.h"

int main(int argc, const char** argv) {
    LinseSegmentOptions app;
    std::string output = app(argc, argv);
    printf("%s\n", output.c_str());
    return 0;
}
