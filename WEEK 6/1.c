#include<stdio.h>
#include"array.h"

void reversePointer(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++, size--)
    {
        temp = *(arr+i);
        *(arr+i) = *(arr+size-1);
        *(arr+size-1) = temp;
    }
}

void reverseIndex(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++, size--)
    {
        temp = arr[i];
        arr[i] = arr[size-1];
        arr[size-1] = temp;
    }
}

int main()
{
    int ar[9], n = 1;
    printf("Enter size of array: ");
    scanf("%d", &n);
    readArr(ar,n);
    printArr(ar, n);
    reversePointer(ar, n);
    printArr(ar, n);
    reverseIndex(ar, n);
    printArr(ar, n);
    return 0;
}