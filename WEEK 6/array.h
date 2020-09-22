#include<stdio.h>

void printArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void readArr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        scanf("%d", arr+i);
}