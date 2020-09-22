#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        int isPrime = 1;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0)
                isPrime=0;
        }
        if(isPrime)sum+=i;
    }    
    printf("The sum of prime numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}