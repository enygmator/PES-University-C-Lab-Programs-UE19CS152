#include<stdio.h>
#include<stdbool.h>

int digits(int n)
{
    return n==0? 0: 1+digits(n/10);
}

int sum(int n)
{
    return n==0? 0: n%10+sum(n/10);
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("digits: %d sum: %d\n", digits(n), sum(n));
    return 0;
}