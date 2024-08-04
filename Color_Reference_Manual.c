#include <stdio.h>
#include "Color_Finding_Process.h"
#include "Color_Reference_Manual.h"

void DisplayReferenceManual()
{
    printf("Pair Number | Major Color | Minor Color\n");
    printf("---------------------------------------\n");
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
        ColorPairToString(&colorPair, colorPairNames);
        printf("%11d | %-11s | %-10s\n", pairNumber, MajorColorNames[colorPair.majorColor], MinorColorNames[colorPair.minorColor]);
    }
}
