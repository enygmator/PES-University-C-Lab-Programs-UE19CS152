#include<stdio.h>
#include"6server.h"

int main()
{
	char str[30], check[30];
	printf("Enter string: ");
	scanf(" %s", str);
	printf("Enter check string: ");
	scanf(" %s", check);
	printf("Check is%sat the end of string", IsAtEnd(str, check)?" ":" not ");
	return 0;
}