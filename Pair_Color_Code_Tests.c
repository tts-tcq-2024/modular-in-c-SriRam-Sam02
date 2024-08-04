#include "Pair_Color_Code_Tests.h"
#include "Color_Finding_Test.h"

void colorPairTest() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);
}
