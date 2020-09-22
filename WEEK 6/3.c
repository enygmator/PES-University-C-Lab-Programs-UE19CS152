#include<stdio.h>
#include"array.h"

void deleteAt(int arr[], int pos, int size)
{
    int temp;
    for (int i = pos-1; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[size-1] = 0;
}

int main()
{
    int ar[9], n, p;
    printf("Enter size of array: ");
    scanf("%d", &n);
    readArr(ar,n);
    printArr(ar, n);
    printf("delete position (1-%d): ", n);
    scanf("%d", &p);
    if (p > n)
    {
        printf("invalid input");
    }
    else
    {
        deleteAt(ar, p, n);
        printArr(ar, n-1);
    }
    return 0;
}