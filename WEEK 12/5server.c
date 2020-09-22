#include<stdio.h>
#include"5server.h"

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

void CreateSquares(int* arrPtr, int* sqrPtr, int size)
{
    for (int i = 0; i < size; i++) sqrPtr[i] = arrPtr[i]*arrPtr[i];
}