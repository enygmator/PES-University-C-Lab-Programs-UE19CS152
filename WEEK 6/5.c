#include<stdio.h>
#include"array.h"

int missing(int arr[], int range)
{
    for (int i = 1; i <= 9; i++)
    {
        if (arr[i-1]!=i)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int arr[9-1] = {1,2,3,4,6,7,8,9};
    printf("Missing value in range is: %d\n", missing(arr, 9));
}