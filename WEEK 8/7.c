#include<stdio.h>
int main()
{
    char ch;
    int isSpace = 0;
    while ((ch = getchar())!='\n')
    {
        if (ch==' ' && isSpace == 0)
        {
            putchar(ch);
            isSpace = 1;
        }
        if (ch!=' ')
        {
            putchar(ch);
            isSpace = 0;
        }
    }
    return 0;
}