#include <stdio.h>

int main() {
    int sizeInt = sizeof(int);
    printf("int %d bytes\n", sizeInt);
    int sizeChar = sizeof(char);
    printf("char %d bytes\n", sizeChar);
    int sizeLong = sizeof(long);
    printf("long %d bytes\n", sizeLong);
    int sizeFloat = sizeof(float);
    printf("float %d bytes\n", sizeFloat);
    int sizeDouble = sizeof(double);
    printf("double %zd bytes\n", sizeDouble);
}