#include<stdio.h>
#include<stdbool.h>
#include"1server.h"

int length(char str[])
{
    char* init = str;
    while (*str!='\0') str++;
    return str-init;
}

void reverse(char str[])
{
    int len = length(str);
    len--;
    char temp;
    for (int i = 0; i <= len; i++, len--)
    {
        temp = *(str+len);
        *(str+len) = *(str+i);
        *(str+i) = temp;
    }
}

bool isStrEqual(char str1[], char str2[])
{
    int len1 = length(str1);
    int len2 = length(str2);
    if (len1 != len2) return false;
    else
    {
        for (int i = 0; i < len1; i++, len1--)
        {
            if (*(str1+i) != *(str2+i)) return false;
        }
        return true;
    }
}