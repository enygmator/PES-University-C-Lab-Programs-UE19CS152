#include<stdio.h>
#include<stdlib.h>
#include"3server.h"

void GetDistance(Distance* d)
{
    printf("Enter Feet: ");
    scanf("%d", &d->feet);
    printf("Enter Inches: ");
    scanf("%d", &d->inches);
}

Distance* AddDistance(Distance d1, Distance d2)
{
    Distance* ad = (Distance*)malloc(sizeof(Distance));
    ad->feet = d1.feet + d2.feet;
    ad->inches = d1.inches + d2.inches;
    if (ad->inches>12)
    {
        ad->feet++;
        ad->inches-=12;
    }    
    return ad;
}

void PrintDistance(Distance d)
{
    printf("\nToalt Feet: %d\nTotal Inches: %d\n", d.feet, d.inches);
}