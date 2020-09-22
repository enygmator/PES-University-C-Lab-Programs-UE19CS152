#include<stdio.h>
int main()
{
    enum days {sunday, monday, tuesday, wednesday, thursday, friday, saturday};
    char ch;
    printf("Enter a 1 for input, any other key for exit");
    scanf("%c", &ch);
    if(ch!='1')return 0;
    printf("Enter a weekday number: ");
    int in;
    scanf("%d", &in);
    if(in==sunday || in==saturday)
        printf("It is weekend");
    else if(in == monday || in == tuesday || in == wednesday || in == thursday || in == friday)
        printf("It is a weekday");
    else
        printf("invalid input");
    return 0;
}