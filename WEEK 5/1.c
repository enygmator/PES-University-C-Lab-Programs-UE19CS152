#include<stdio.h>

int fact(int n)
{
    return n==0?1:n*fact(n-1);
}

int c(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}

int main()
{
    int n, r;
    printf("Enter n and r: ");
    scanf("%d%d", &n, &r);
    printf("nCr is: %d\n", c(n,r));
    return 0;
}