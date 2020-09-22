#include<stdio.h>
#include"1server.h"

int main()
{
    printf("Enter string: ");
    char str[30];
    scanf("%s", str);
    char revStr[30];
    int i = 0;
    for (; *(str+i) != '\0'; i++) *(revStr+i) = *(str+i); //string copy
    *(str+i) = '\0';
    reverse(revStr);
    printf("Reversed string is: %s\n", revStr);
    printf("The string is%sa palindrome", isStrEqual(str, revStr)?" ":" not ");
    return 0;
}