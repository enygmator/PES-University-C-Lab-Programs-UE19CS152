#include<stdio.h>
#include"2server.h"

int main()
{
    printf("Enter string: ");
    char str[30];
    scanf("%[^\n]", str);
    int start, end;
    printf("Enter start index: ");
    scanf("%d", &start);
    printf("Enter end index: ");
    scanf("%d", &end);
    printf("The string is: %s\n", str);
    if (start<0 || end>length(str))
    {
        printf("Invalid input");
    }else
    {
        subString(str, start, end);        
    }
    return 0;
}