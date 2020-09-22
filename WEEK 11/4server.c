#include<stdio.h>
#include<stdlib.h>
#include"4server.h"

void ReadComplex(Complex* cmp)
{
    printf("Enter number in format: x+iy (x=rp, y=ip) : ");
    scanf("%d+i%d", &cmp->rp, &cmp->ip);
}

void PrintComplex(Complex cmp)
{
    printf("%d+i(%d)\n", cmp.rp, cmp.ip);
}

Complex* AddComplex(Complex c1, Complex c2)
{
    Complex* cmp = (Complex*)malloc(sizeof(Complex));
    cmp->rp = c1.rp+c2.rp;
    cmp->ip = c1.ip+c2.ip;
    return cmp;
}

Complex* SubComplex(Complex c1, Complex c2)
{
    Complex* cmp = (Complex*)malloc(sizeof(Complex));
    cmp->rp = c1.rp-c2.rp;
    cmp->ip = c1.ip-c2.ip;
    return cmp;
}

Complex* MulComplex(Complex c1, Complex c2)
{
    Complex* cmp = (Complex*)malloc(sizeof(Complex));
    cmp->rp = c1.rp*c2.rp-c1.ip*c2.ip;
    cmp->ip = c1.rp*c2.ip+c1.ip*c2.rp;
    return cmp;
}