#include <iostream>

#include "include/numeral-system-app.h"

int main(int argc, const char *argv[])
{
    NumeralSystemApp app;
    std::string output = app(argc, argv);
    std::cout << output;
    return 0;
}
