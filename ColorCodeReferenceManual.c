#include"DefineColorNames.h"

void PrintColorCodingReference() {
    int pairNumber = 1;
    for (int major = White; major <= Violet; major++) {
        for (int minor = Blue; minor <= Slate; minor++) {
            printf("%d. %s-%s\n", pairNumber, MajorColorNames[major], MinorColorNames[minor]);
            pairNumber++;
        }
    }
}
