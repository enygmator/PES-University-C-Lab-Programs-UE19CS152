#include<stdio.h>
#include"6server.h"

int IsAtEnd(char str[], char check[])
{
    char *checkBeg = check;
    while (*str != '\0') str++;
    while (*check != '\0') check++;
    int checkLen = check - checkBeg;
    str--; check--;
    while (checkLen != 0)
    {
        if (*check != *str) return 0;
        check--; str--; checkLen--;
    }    
    return 1;
}