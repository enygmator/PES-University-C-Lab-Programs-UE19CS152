#include<stdio.h>
int main()
{
    double a,b;
    char ch;
    printf("Enter 2 numbers: ");
    scanf("%lf%lf",&a,&b);
    printf("What operation?");
    scanf(" %c",&ch);
    printf("The answer is: ");
    switch (ch)
    {
    case '+':
        printf("%lf",a+b);
        break;
    case '-':
        printf("%lf",a-b);
        break;
    case '*':
        printf("%lf",a*b);
        break;
    case '/':
        if(b!=0)
            printf("%lf",a/b);
        else
            printf("Division by zero not possible");
        break;    
    default:
        printf("Invalid choice");
        break;
    }
    return 0;
}