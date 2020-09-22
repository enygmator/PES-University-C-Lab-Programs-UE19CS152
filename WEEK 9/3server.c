#include<stdio.h>
#include"3server.h"

int length(char str[])
{
    char* init = str;
    while (*str!='\0') str++;
    return str-init;
}

void append(char src1[], char src2[], int times)
{
    int len2 = length(src2);
    for (int i = 0; i < times; i++)
    {
        int len1 = length(src1);
        int j;
        for (j = 0; j < len2; j++)
        {
            *(src1+len1+j) = *(src2+j);
        }
        *(src1+len1+len2) = '\0';
    }
    printf("Concatenated string is: %s", src1);
}