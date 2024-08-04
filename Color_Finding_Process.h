#ifndef COLOR_FINDING_PROCESS_H
#define COLOR_FINDING_PROCESS_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

extern const char* MajorColorNames[];
extern int numberOfMajorColors;
extern const char* MinorColorNames[];
extern int numberOfMinorColors;

#define MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

void ColorPairToString(const ColorPair* colorPair, char* buffer);
ColorPair GetColorFromPairNumber(int pairNumber);
int GetPairNumberFromColor(const ColorPair* colorPair);

#endif
