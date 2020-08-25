#include "ColorCoding.h"
#include "ColorPair.h"

void printColorCodingManual()
{

    std::cout << "\nColor Coding Manual\n" << std::endl;
    std::cout << "Pair Number"
              << " --------------> "
              << "Major Color MinorColor\n"
              << std::endl;

    for (int i = 0; i < 25; i++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i + 1);
        std::cout << i+1
              << " ------------------------> "
              <<colorPair.ToString()
              <<std::endl;
    }
    std::cout<<"\n";
}