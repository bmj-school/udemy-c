#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Item
{
    char * itemName;
    int quantity;
    float price;
    float amount;
};

#define SLEN 20

void readitem(struct Item *pitem)
{
    char temp[SLEN];
    printf("Enter item name:");
    scanf("%s", temp);
    pitem->itemName = (char *) malloc(strlen(temp + 1)); // Allocate mem

    strcpy(pitem->itemName, temp); // Copy name to allocated mem
    printf("\n");
    // free(temp);

    int temp2;
    printf("Enter item quantity:");
    scanf("%i", &temp2);
    // pitem->quantity = (int *) malloc(1 * sizeof(int)); // Allocate mem
    pitem->quantity = temp2;
    printf("\n");

    printf("Enter price:");
    scanf("%f", &pitem->price);
}

void printitem(const struct Item *pitem)
{
    printf("\n");
    printf("Item: %s\n Quantity: %i\n Price: %f\n", pitem->itemName, pitem->quantity, pitem->price);
}

int main()
{
    struct Item item;

    struct Item *ptrItem = NULL;
    ptrItem = &item;

    readitem(ptrItem);

    printitem(ptrItem);


}