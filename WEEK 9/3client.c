#include<stdio.h>
#include"3server.h"

int main()
{
    printf("Enter string 1: ");
    char str1[30];
    scanf("%[^\n]", str1);
    printf("Enter string 2: ");
    char str2[30];
    scanf(" %[^\n]", str2);
    int times;
    printf("Enter number of times to append: ");
    scanf("%d", &times);
    append(str1, str2, times);
    return 0;
}