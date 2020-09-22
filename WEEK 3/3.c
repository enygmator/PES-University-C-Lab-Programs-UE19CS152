#include<stdio.h>
int main()
{
    int n, p, ch;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Enter the bit position from 0: ");
    scanf("%d",&p);
    printf("What do you want to do?\n1 - check if bit is set or unset\n2 - set bit\n3 - clear bit\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("The bit is ");
        n&(1<<p)?printf("Set"):printf("Unset");
        break;
    case 2:
        n|=(1<<p);
        printf("The bit was set and number is %d", n);
        break;
    case 3:
        n&=~(1<<p);
        printf("The bit was cleared and number is %d",n);
        break;
    default:
        printf("invalid choice");
        break;
    }    
    printf("\n");
    return 0;
}