#include<stdio.h>
int main()
{
    char ch, temp = '\0';
    int count = 1;
    while ((ch = getchar())!='\n')
    {
        if (ch==temp)
        {
            count++;
        }
        else
        {
            if(temp!='\0') printf("%c : %d\n", temp, count);
            count = 1;
        }
        temp = ch;
    }
    printf("%c : %d\n", temp, count);
    return 0;
}