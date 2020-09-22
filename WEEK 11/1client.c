#include<stdio.h>
#include"1server.h"

int main()
{
	Date d1, d2;
    printf("Enter Date 1 in the format dd/mm/yyyy: ");
	InputDate(&d1);
	printf("Date 1: ");
	PrintDate(d1);
    printf("Enter Date 2 in the format dd/mm/yyyy: ");
	InputDate(&d2);
	printf("Date 2: ");
	PrintDate(d2);
	DateCmp(d1, d2);
	
	return 0;
}
