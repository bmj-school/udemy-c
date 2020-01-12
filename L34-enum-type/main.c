#include <stdio.h>

int main() {
    enum company { GOOGLE, FACEBOOK, XEROX, EBAY, MICROSOFT };

    enum company xerox = XEROX;
    enum company google = GOOGLE;
    enum company ebay = EBAY;

    printf("%d", xerox);

    return 0;
}