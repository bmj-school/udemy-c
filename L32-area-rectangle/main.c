#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int numberOfArgs = argc;

    char *progName = argv[0];
    char *width = argv[1];
    char *height = argv[2];

    float floatWidth = strtod(width, NULL);
    float floatHeight = strtod(height, NULL);

    float perimeter;
    float area;

    printf("Number args: %d\n", numberOfArgs);

    printf("Width: %f\n", floatWidth);
    printf("Height: %f\n", floatHeight);

    perimeter = 2 * (floatWidth + floatHeight);
    area = floatWidth * floatHeight;

    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    return 0;
}