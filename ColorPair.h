#include <iostream>
#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H
#include "constants.h"

class ColorPair
{
private:
    MajorColor majorColor;
    MinorColor minorColor;

public:
    ColorPair(MajorColor major, MinorColor minor);

    MajorColor getMajor();
    MinorColor getMinor();
    std::string ToString();
};

#endif