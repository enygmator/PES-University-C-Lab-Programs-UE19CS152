#include<stdio.h>

void hailstone(int n)
{
    if(n==1)
    {
        printf("%d ", 1);
    }
    else
    {
        printf("%d ",n);
        if(n%2==0)
        {
            hailstone(n/2);
        }else
        {
            hailstone((3*n)+1);
        }
    }    
}

int main()
{
    int x = 1;
    printf("Enter number: ");
    scanf("%d", &x);
    hailstone(x);
    return 0;
}