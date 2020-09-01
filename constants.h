#ifndef CONSTANTS
#define CONSTANTS

static const char *MajorColorNames[] = {"White", "Red", "Black", "Yellow", "Violet"};
static const int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
static const char *MinorColorNames[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
static const int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

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

#endif