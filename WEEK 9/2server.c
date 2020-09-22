#include<stdio.h>
#include"2server.h"

void subString(char str[], int start, int end)
{
    char subst[30];
    for (int i = start, j = 0; i <= end; i++, j++)
    {
        *(subst+j) = *(str+i);
    }
    printf("The sub-string is: %s", subst);
}

int length(char str[])
{
    char* init = str;
    while (*str!='\0') str++;
    return str-init;
}