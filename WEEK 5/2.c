#include<stdio.h>
#include<stdbool.h>
#include<math.h>

int digits(int n)
{
    int count = 0;
    while (n!=0)
    {
        count++;
        n/=10;
    }
    return count;
}

int armstrong(int n)
{
    int m = digits(n), sum=0, l = n;
    while (n!=0)
    {
        sum+=pow(n%10, m);
        n/=10;
    }
    return sum==l;
}

int perfect(int n)
{
    int sum=0;
    for (int i = 1; i < n; i++)
    {
        if (n%i==0)
            sum+=i;
    }
    return sum==n;
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("perfect: %s armstrong: %s\n", perfect(n)?"Yes":"No", armstrong(n)?"Yes":"No");
    return 0;
}