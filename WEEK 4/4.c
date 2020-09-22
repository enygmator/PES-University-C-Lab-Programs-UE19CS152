#include<stdio.h>
#include<math.h>
int main()
{
    double x;
    double sum = 0, term = 1;
    printf("Enter angle in degrees: ");
    scanf("%lf", &x);
    x=x*3.1412/180;
    for (int i = 1; fabs(term)>0.00001; i+=2)
    {
        int pro = 1;
        for (int j = 1; j <= i; j++)
            pro*=j;
        term = (pow(-1,(i/2)))*(pow(x,i)/pro);
        sum+=term;
    }
    printf("sin(%lf) is %lf\n",x,sum);
    return 0;
}