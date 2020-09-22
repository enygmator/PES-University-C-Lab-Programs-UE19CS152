#include<stdio.h>
int main()
{
    char ch, temp = '\0';
    while ((ch=getchar())!='\n')
    {
        if (ch!=temp) putchar(ch);
        temp = ch;
    }
    return 0;
}