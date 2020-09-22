#include<stdio.h>
#include"1server.h"

void InsertionSortAsc(int* arr, int size)
{
    for (int pos = 0; pos < size; pos++)
    {
        int val = arr[pos];
        int hole = pos;
        while (hole>0 && val<arr[hole-1])
        {
            arr[hole] = arr[hole-1];
            hole--;
        }
        arr[hole] = val;
    }    
}

void ReadToArray(int* arr, int size)
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) scanf("%d", arr+i);
    printf("\n");
}

void PrintArray(int* arr, int size)
{
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) printf("%d ", *(arr+i));
    printf("\n");
}