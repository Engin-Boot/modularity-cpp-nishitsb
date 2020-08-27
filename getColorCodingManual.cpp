#include "getColorCodingManual.h"
#include "ColorPair.h"

using namespace std;

string getColorCodingManual()
{
    string colorCodingManual;

    colorCodingManual = "\nColor Coding Manual\n\nPair Number --------------> Major Color MinorColor\n\n";

    int totalColorPair = numberOfMajorColors*numberOfMinorColors;

    for (int i = 0; i < totalColorPair; i++)
    {
        TelCoColorCoder::ColorPair colorPair = TelCoColorCoder::GetColorFromPairNumber(i + 1);

        string pairNumber = to_string(i + 1);
        string correspondingColorPair = colorPair.ToString();

        colorCodingManual = colorCodingManual +
                            pairNumber +
                            " ------------------------> " +
                            correspondingColorPair + "\n";
    }
    return colorCodingManual;
}