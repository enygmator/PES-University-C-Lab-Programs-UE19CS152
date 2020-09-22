#include<stdio.h>
#include"4server.h"
#include<string.h>
 
int main()
{
      int num;
      printf("\nEnter an Odd Number:\t");
      scanf("%d", &num);
      check_magic_square(num);
      return 0;
}