#include"4server.h"

int length(char str[])
{
    char* init = str;
    while (*str!='\0') str++;
    return str-init;
}

void replace(char str[], char chR, char chN)
{
    int len = length(str);
    for (int i = 0; i < len; i++)
    {
        if(*(str+i) == chR) *(str+i) = chN;
    }
}