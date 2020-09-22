#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k < (n-i); k++)
        {        
            printf("  ");
        }
        for (int j = i; j < 2*i; j++)
        {
            printf("%d ", j);
        }
        for (int j = 2*(i-1); j >= i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}