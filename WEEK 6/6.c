#include<stdio.h>
#include"array.h"

void add(int ar1[], int ar2[], int size)
{
    int addar[size];
    for (int i = 0; i < size; i++)
    {
        addar[i] = ar1[i] + ar2[i];
    }
    printArr(addar, size);
}

void subtract(int ar1[], int ar2[], int size)
{
    int subar[size];
    for (int i = 0; i < size; i++)
    {
        subar[i] = ar1[i] - ar2[i];
    }
    printArr(subar, size);
}

int main()
{
    int n = 1, m = 2;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int ar1[n];
    readArr(ar1,n);
    int ar2[n];
    readArr(ar2,n);
    printf("Addtion of arrays: ");
    add(ar1,ar2,n);
    printf("Subtraction of arrays: ");
    subtract(ar1,ar2,n);
    return 0;
}