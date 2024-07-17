#include <stdio.h>
#include "ColorCodeReferenceManual.h"

int numberOfMajorColors = sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
int numberOfMinorColors = sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

void PrintColorCodingReference() {
    int pairNumber = 1;

    for (int major = 0; major < numberOfMajorColors; major++) {
        for (int minor = 0; minor < numberOfMinorColors; minor++) {
            printf("%d. %s-%s\n", pairNumber, MajorColorNames[major], MinorColorNames[minor]);
            pairNumber++;
        }
    }
}
