#include <stdio.h>
#include <stdbool.h>

void swap(int *x, int *y) // This takes a pointer (an address!)
{
    int temp;
    temp = *x; // Save value
    *x = *y;
    *y = temp;
}

// This function returns a pointer
int * myFunction()
{

}

// pmessage is a pointer to a const char
// The char VALUE is a const
bool sendMessage(const char* pmessage)
{
    return true;
}

int main()
{
    int a = 100, b = 200;

    printf("%d %d\n", a, b);

    swap(&a, &b); // Pass in the ADDRESS

    printf("%d %d\n", a, b);
}