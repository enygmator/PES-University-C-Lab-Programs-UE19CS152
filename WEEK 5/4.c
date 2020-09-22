#include<stdio.h>
#include<math.h>

void bin(int n)
{
    int sum = 0, count = 0;
    while (n!=0)
    {
        sum+=(n%2)*pow(10,count++);
        n/=2;
    }
    printf("%d\n",sum);
}

void oct(int n)
{
    int sum = 0, count = 0;
    while (n!=0)
    {
        sum+=(n%8)*pow(10,count++);
        n/=8;
    }
    printf("%d\n",sum);
}

int main()
{
    int n;
    char choice;
    printf("1 - Decimal to Bin\n2 - Decimal to Oct\nany key to exit\n");
    printf("enter your choice: ");
    scanf(" %c", &choice);
    printf("Enter a number: ");
    scanf("%d", &n);
    switch (choice)
    {
    case '1':
        bin(n);
        break;
    case '2':
        oct(n);
        break;
    default:
        break;
    }
    return 0;
}