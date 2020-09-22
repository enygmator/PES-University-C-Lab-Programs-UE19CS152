#include<stdio.h>
#include"5server.h"

int main()
{
	char str[30];
	printf("Enter string: ");
	scanf("%s", str);
	occurences(str);
	
	return 0;
}
