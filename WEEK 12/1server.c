#include<stdio.h>
#include"1server.h"

void ReadArray(int* arrPtr, int size)
{
    printf("Enter the array elements:\n");
    for (int i = 0; i < size; arrPtr++, i++) scanf("%d", arrPtr);
}

void PrintArray(int* arrPtr, int size)
{
    for (int i = 0; i < size; arrPtr++, i++) printf("%d  ", *arrPtr);
    printf("\n");
}

void PermuteArrayRTL(int* arrPtr, int size)
{
    int temp = *arrPtr;
    for (int i = 0; i < size-1; i++, arrPtr++) *arrPtr = *(arrPtr+1);
    *arrPtr = temp;
}