#include<stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        sum = 0;
        for (int j = 1; j <= i; j++)
        {            
            i!=j?printf("%d + ", j):printf("%d ", j);
            sum+=j;
        }
        printf("= %d\n", sum);
    } 
    return 0;
}