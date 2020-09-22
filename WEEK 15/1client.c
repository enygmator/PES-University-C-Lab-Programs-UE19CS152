#include<stdio.h>
#include<stdlib.h>
#include"1server.h"

int main()
{
	int n;
	printf("How many elements: ");
	scanf("%d", &n);
	int* arr = (int*)malloc(n*sizeof(int));
	ReadToArray(arr, n);
	printf("Before Sorting:\n");
	PrintArray(arr, n);
	InsertionSortAsc(arr, n);
	printf("After Sorting:\n");
	PrintArray(arr, n);
	return 0;
}
