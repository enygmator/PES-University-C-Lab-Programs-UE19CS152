#include<stdio.h>
#include"4server.h"

int main()
{
    printf("Enter string 1: ");
    char str[30];
    scanf("%[^\n]", str);
    printf("Original string: %s\n", str);
    char chR, chN;
    printf("Enter char to replace: ");
    scanf(" %c", &chR);
    printf("Enter new char: ");
    scanf(" %c", &chN);
    replace(str, chR, chN);
    printf("Replaced string: %s", str);
    return 0;
}