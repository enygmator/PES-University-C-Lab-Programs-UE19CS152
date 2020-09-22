#include<stdio.h>
int main()
{
    double per;
    printf("Enter percentage: ");
    scanf("%lf", &per);
    if(per >= 70)
    {
        printf("FCD");
    }
    else if(per<70&&per>=60)
    {
        printf("FC");
    }
    else if(per<60&&per>=35)
    {
        printf("SC");
    }
    else if(per<35)
    {
        printf("Fail");
    }    
    return 0;
}