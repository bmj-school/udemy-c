#include <stdio.h>
#include <stdbool.h>

int countChars(const char str[]);
int concat(const char str1[], const char str2[]);
int compare(const char str1[], const char str2[]);

int countChars(const char str[])
{
    int i=0;
    while(str[i]) // Or while(str[i] != '\0')
    {
        i++;
    }
    return i;
}

void concatArray(char result[], const char str1[], const char str2[])
{
    int i, j;
    for (i = 0; str1[i]!='\0'; ++i)
    {
        result[i] = str1[i];
    }
    for (j = 0; str2[j]!='\0'; ++j)
    {
        result[i+j] = str2[j];
    }
    result[i+j] = '\0';
}

int concat(const char str1[], const char str2[])
{
    int totalLen = countChars(str1) + countChars(str2);
    char res[totalLen];
    int count=0;
    int i =0;
    while(str1[i])
    {
        res[count] = str1[i];
        count++;
        i++;
    }
    i=0;
    while(str2[i])
    {
        res[count] = str2[i];
        count++;
        i++;
    }
    printf("Concatenated: %s", res);
}

int compare(const char str1[], const char str2[])
{
    if(countChars(str1)!=countChars(str2)){
        return false;
    }

    int i = 0;
    while(str1[i])
    {
        if(str1[i]!=str2[i]) return false;
        i++;
    }
    return true;
}

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