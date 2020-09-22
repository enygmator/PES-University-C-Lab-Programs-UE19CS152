#include<stdio.h>
int main()
{
    char ch;
    int count = 0;
    while ((ch = getchar())!='\n')
    {
        if (ch==' ')
        {
            printf(": %d\n", count);
            count = 0;
        }
        else
        {
            putchar(ch);
            count++;
        }
    }
    printf(": %d\n", count);
    return 0;
}