#include<stdio.h>
#include<stdbool.h>
int main()
{
    int dd, mm, yy, MAXDATE;
    bool isValid = true;
    printf("Enter a day: ");
    scanf("%d",&dd);
    printf("Enter a month: ");
    scanf("%d",&mm);
    printf("Enter a year: ");
    scanf("%d",&yy);
    if(mm>12 || mm<1)
        isValid=false;
    else if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
    {
        MAXDATE = 31;
    }else if(mm==2)
    {
        if((yy%4==0 && yy%100!=0) || yy%400==0){MAXDATE = 29;}
        else{MAXDATE = 28;}                      
    }else{MAXDATE = 30;}

    if(dd>MAXDATE || dd<1)
        isValid=false;
    else
    {
        if(dd==MAXDATE)
        {
            if(mm==12)
            {
                yy+=1;
                mm=1;
                dd=1;
            }
            else
            {
                dd=1;
                mm+=1;
            }            
        }
        else
            dd+=1;
    }
    isValid?printf("date is valid and next date is: %d/%d/%d",dd,mm,yy):printf("date is invalid");
    printf("\n");
    return 0;
}