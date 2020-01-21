#include <stdio.h>
#include <stdbool.h>


int main()
{
    const char myString[] = "123456";
    printf("%s has %d characters\n", myString, countChars(myString));

    concat("hello", "concat");
    printf("\n");

    char result[50];
    concatArray(result, "Word1", "Word2");
    printf("Concat with direct assignement: %s \n", result);


    const char s1[] = "hello", s2[] = "hello";
    printf("%s %s equal: %d\n", s1, s2, compare(s1, s2));
    const char s3[] = "hellox", s4[] = "hello";
    printf("%s %s equal: %d\n", s3, s4, compare(s3, s2));
    const char s5[] = "hyllo", s6[] = "hello";
    printf("%s %s equal: %d\n", s5, s6, compare(s5, s6));

}