#include<stdio.h>
int main()
{
    char ch, temp = ' ';
    while ((ch = getchar())!='\n')
    {
        if (ch==' ')
        {
            putchar(temp);
            printf(" ");
            temp = ch;
        }
        else if (temp==' ')
        {
            temp = ch;
        }
        else
        {
            putchar(ch);
        }
    }
    putchar(temp);
    return 0;
}