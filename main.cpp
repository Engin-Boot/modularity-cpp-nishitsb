#include "tests.h"
#include "getColorCodingManual.h"

int main() {

    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    std::cout << getColorCodingManual();

    return 0;
}