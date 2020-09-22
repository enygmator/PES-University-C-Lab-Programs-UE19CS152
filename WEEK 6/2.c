#include<stdio.h>
#include"array.h"

void fibb(int arr[], int term)
{
    for (int i = 0; i < term; i++)
    {
        if (i == 0)
        {
            arr[0] = 0;
            arr[1] = 1;
            i+=1;
        }else
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
    }
}

int main()
{
    int n;
    printf("terms in fibonacci series: ");
    scanf("%d", &n);
    int ar[n];
    fibb(ar, n);
    printArr(ar, n);
    return 0;
}