#include<stdio.h>
int main()
{
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    if((n&1)==0)
    {
        printf("Even");
    }        
    else
    {
        printf("Odd");
    }
    
    printf("\n");
    return 0;
}