#include<stdio.h>
#include"1server.h"

int main()
{
	int lines = 1;
	printf("Enter number of lines: ");
	scanf("%d", &lines);
	DrawPascal(lines);
	
	return 0;
}
