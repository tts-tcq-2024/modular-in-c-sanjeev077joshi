#include"DefineColorNames.h"

void PrintColorCodingReference() {
    int pairNumber = 1;
    for (int major = WHITE; major <= VIOLET; major++) {
        for (int minor = BLUE; minor <= SLATE; minor++) {
            printf("%d. %s-%s\n", pairNumber, MajorColorNames[major], MinorColorNames[minor]);
            pairNumber++;
        }
    }
}
