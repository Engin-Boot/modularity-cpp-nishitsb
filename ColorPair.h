#include <iostream>
#ifndef COLOR_PAIR_H
#define COLOR_PAIR_H

static char *MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
static int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
static char *MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
static int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

namespace TelCoColorCoder
{
    enum MajorColor
    {
        WHITE,
        RED,
        BLACK,
        YELLOW,
        VIOLET
    };
    enum MinorColor
    {
        BLUE,
        ORANGE,
        GREEN,
        BROWN,
        SLATE
    };

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
    ColorPair GetColorFromPairNumber(int pairNumber);

    int GetPairNumberFromColor(MajorColor major, MinorColor minor);
} // namespace TelCoColorCoder
#endif