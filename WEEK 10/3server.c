#include<stdio.h>
#include"3server.h"

void read2DArray(int *arr, int d1, int d2)
{
    for (int i = 0; i < d1; i++)
    for (int j = 0; j < d2; j++)
    scanf("%d", arr+i*d2+j);
}

void print2DArray(int *arr, int d1, int d2)
{
    for (int i = 0; i < d1; i++)
    {
        for (int j = 0; j < d2; j++)
        {
            printf("%d ", *(arr+i*d2+j));
        }
        printf("\n");
    }
}

void printSpiral(int *arr, int d1, int d2)
{
    int ou1 = 0, in1 = 0, ou2 = d1-1, in2 = d2-1;
    while (in1<=in2 && ou1<=ou2)
    {
        for (int j = in1; j <= in2; j++)
        {
            printf("%d ", *(arr+ou1*d2+j));
        }
        ou1++;
        for (int i = ou1; i <= ou2; i++)
        {
            printf("%d ", *(arr+i*d2+(in2)));
        }
        in2--;
        for (int j = in2; j >= in1; j--)
        {
            printf("%d ", *(arr+ou2*d2+j));
        }
        ou2--;
        for (int i = ou2; i >= ou1; i--)
        {
            printf("%d ", *(arr+i*d2+in1));
        }
        in1++;
    }
}