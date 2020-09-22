#include<stdio.h>
#include"3server.h"

int main()
{
	Distance D[2];
	printf("Enter first distance details:\n");
	GetDistance(&D[0]);
	printf("Enter second distance details:\n");
	GetDistance(&D[1]);
	Distance* ad = AddDistance(D[0], D[1]);
	PrintDistance(*ad);
	return 0;
}
