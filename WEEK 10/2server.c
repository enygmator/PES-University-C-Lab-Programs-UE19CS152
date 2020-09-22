#include<stdio.h>
#include"2server.h"

void read3DArray(int *arr, int d1, int d2, int d3)
{
    for (int i = 0; i < d1; i++)
    for (int j = 0; j < d2; j++)
    for (int k = 0; k < d3; k++)
    scanf("%d", arr+i*d2*d3+j*d3+k);
}

void print3DArray(int *arr, int d1, int d2, int d3)
{
    for (int i = 0; i < d1; i++)
    {
        for (int j = 0; j < d2; j++)
        {
            for (int k = 0; k < d3; k++)
            {
                printf("%d ", *(arr+i*d2*d3+j*d3+k));
            }
            printf("\n");
        }
        printf("\n");
    }
}

void sum3DArray(int *arr1, int *arr2, int *sum, int d1, int d2, int d3)
{
    for (int i = 0; i < d1; i++)
    for (int j = 0; j < d2; j++)
    for (int k = 0; k < d3; k++)
    *(sum+i*d2*d3+j*d3+k) = *(arr1+i*d2*d3+j*d3+k) + *(arr2+i*d2*d3+j*d3+k);
}