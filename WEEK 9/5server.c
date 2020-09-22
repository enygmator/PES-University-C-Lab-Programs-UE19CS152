#include<stdio.h>
#include"5server.h"

void DropFirstChar(char str[])
{
    while (*str != '\0')
    {
        *str = *(str+1);
        str++;
    }    
}

void occurences(char str[])
{
    while (*str != '\0')
    {
        char *chr = str;
        char now = *str;
        int count = 0;
        while (*chr != '\0')
        {
            if (*chr != now)
            {
                chr++;
                continue;
            }
            count++;
            DropFirstChar(chr);
        }
        printf("%c : %d\n", now, count);
    }
}