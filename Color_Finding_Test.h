#ifndef COLOR_FINDING_Test__H
#define COLOR_FINDING_Test__H
#include "Color_Finding_Process.h"

void testNumberToPair(int pairNumber, enum MajorColor expectedMajor, enum MinorColor expectedMinor);
void testPairToNumber(enum MajorColor major, enum MinorColor minor, int expectedPairNumber);

#endif
