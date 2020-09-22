#include<stdio.h>
#include"4server.h"

int main()
{
	Complex c[2];
	printf("Enter first complex number:\n");
	ReadComplex(&c[0]);
	printf("Enter second complex number:\n");
	ReadComplex(&c[1]);
	printf("The addition of C1 and C2: ");
	PrintComplex(*AddComplex(c[0], c[1]));
	printf("The subtraction of C1 and C2: ");
	PrintComplex(*SubComplex(c[0], c[1]));
	printf("The multiplication of C1 and C2: ");
	PrintComplex(*MulComplex(c[0], c[1]));
	return 0;
}
