#include<stdio.h>

void pattern(int n)
{
    if(n==1)
    {
        printf("1\n");
        return;
    }
    else
    {
        pattern(n-1); 
        int sum = 1;
        for (int i = 1; i < n; i++)
        {
            sum+=i;
        }
        for (int i = sum; i < sum+n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

int main()
{
    int x = 0;
    printf("Enter no. of rows: ");
    scanf("%d", &x);
    pattern(x);
    return 0;
}