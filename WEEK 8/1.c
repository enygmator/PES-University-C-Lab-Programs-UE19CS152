#include<stdio.h>
int main()
{
    char ch;
    while ((ch=getchar())!='\n')
    {
        if ((ch>=65 && ch <= 90) || (ch>=97 && ch<=122) || (ch>='0' && ch<='9'))
        {
            ch++;
            putchar(ch);
        }        
    }    
    return 0;
}