#include<stdio.h>
#include<stdbool.h>
#include"1server.h"

void InputDate(Date* date)
{
    scanf("%hd/%hd/%d", &date->dd, &date->mm, &date->yy);
}

void PrintDate(Date date)
{
    printf(" %hd/%hd/%d\n", date.dd, date.mm, date.yy);
}

void DateCmp(Date d1, Date d2)
{
    int dd1 = 10000*d1.yy+100*d1.mm+d1.dd;
    int dd2 = 10000*d2.yy+100*d2.mm+d2.dd;
    if(dd1 == dd2)
    printf("dates are equal\n");
    else if (dd1>dd2)
    printf("date1 is larger\n");
    else if (dd1<dd2)
    printf("date2 is larger\n");
}