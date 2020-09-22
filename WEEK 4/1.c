#include<stdio.h>
int main()
{
    int n, factors = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The factors of %d are: ", n);
    for (int i = 1; i <= n; i++)
    {
        if (n%i==0)
        {
            printf("%d ", i);
            factors++;
        }        
    }
    factors==2?printf("\nnumber is prime\n"):printf("\nnumber is not prime\n");    
    return 0;
}