#include<stdio.h>
#include<stdlib.h>
#include"1server.h"

int main()
{
	int n;
	printf("How many elements: ");
	scanf("%d", &n);
	int* arrPtr = (int*)malloc(n*sizeof(int));
	ReadArray(arrPtr, n);
	printf("Array before permuting:\n");
	PrintArray(arrPtr, n);
	PermuteArrayRTL(arrPtr, n);
	printf("Array after permuting:\n");
	PrintArray(arrPtr, n);
	free(arrPtr);
	return 0;
}
