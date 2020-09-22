#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, d;
    double r1, r2;
    printf("Enter a, b and c: ");
    scanf("%d%d%d", &a, &b, &c);    
    d = b*b - 4*a*c;
    if (d < 0)
    {
        printf("First root = %lf + i%lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
        printf("Second root = %lf - i%lf\n", -b/(double)(2*a), sqrt(-d)/(2*a));
    }
    else
    {
        r1 = (-b + sqrt(d))/(2*a); r2 = (-b - sqrt(d))/(2*a);
        printf("First root = %lf, Second root = %lf\n", r1, r2);
    }
    return 0;
}