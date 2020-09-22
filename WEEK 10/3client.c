#include<stdio.h>
#include"3server.h"

int main()
{
	int a,b;
	printf("Enter the dimensions of matrix: ");
	scanf("%d%d", &a, &b);
	int arr1[a][b];
	printf("Read matrix A: ");
	read2DArray(&arr1[0][0], a,b);
	print2DArray(&arr1[0][0], a,b);
	printSpiral(&arr1[0][0], a, b);
	
	return 0;
}
