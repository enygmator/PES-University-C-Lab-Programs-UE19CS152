#include<stdio.h>
#include"array.h"
#include<stdbool.h>

int digitSum(int n)
{
    int sum = 0;
    while (n!=0)
    {
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

bool isEvenParity(int n)
{
    int ones = 0;
    while (n!=0)
    {
        if(n%2) {ones++;}
        n/=2;
    }
    return ones%2?false:true;
}

int main()
{
    int n, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int ar[n];
    readArr(ar, n);
    printArr(ar, n);
    for (int i = 0; i < n; i++) if(isEvenParity(ar[i])) sum+=digitSum(ar[i]);
    printf("Sum of digits with even parity is: %d\n", sum);
    return 0;
}