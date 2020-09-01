#include "getPairNumberFromColor.h"

int GetPairNumberFromColor(MajorColor major, MinorColor minor)
{
    return major * numberOfMinorColors + minor + 1;
}