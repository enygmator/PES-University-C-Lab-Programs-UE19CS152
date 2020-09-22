#include<stdio.h>
#include<stdlib.h>
#include"5server.h"

int main()
{
	int n;
	printf("How many elements: ");
	scanf("%d", &n);
	int* arrPtr = (int*)malloc(n*sizeof(int));
	int* sqrPtr = (int*)malloc(n*sizeof(int));
	ReadArray(arrPtr, n);
	printf("Array: ");
	PrintArray(arrPtr, n);
	CreateSquares(arrPtr, sqrPtr, n);
	printf("\nSquare Array: ");
	PrintArray(sqrPtr, n);
	free(sqrPtr);
	free(arrPtr);	
	return 0;
}
