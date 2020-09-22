#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
            return false;
    }
    return true;
}

int nextPrime(int n)
{
    for (n++;;n++)
    {
        if(isPrime(n))
            return n;
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d is %sprime and next prime is: %d\n", n, isPrime(n)?"":"not ", nextPrime(n));
    return 0;
}