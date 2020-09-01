#ifndef TESTS_H
#define TESTS_H
#include "ColorPair.h"
#include "getPairNumberFromColor.h"
#include "getColorFromPairNumber.h"
#include "assert.h"

void testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor);

void testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber);

#endif