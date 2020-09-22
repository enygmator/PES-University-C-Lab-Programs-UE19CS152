# 2D and 3D array,multiple files usage and demonstration of GDB.

## 1. Write a C program to generate Pascal triangle
OUTPUT:  
1. 
2. 

## 2. Write a C program to perform matrix addition using three-dimensional array.
OUTPUT:  
1. 
2. 

## 3. Write a C program to generate spiral form of the matrix
OUTPUT:  
1. 
2. 

# Practise programs

## 4. 
1) Write a C program to generate magic square.
A magic square of order n is an arrangement of n^2 numbers, usually distinct integers, in
a square, such that the n numbers in all rows, all columns, and both diagonals sum to
the same constant.
A magic square contains the integers from 1 to n^2.The constant sum in every row,
column and diagonal is called the magic constant or magic sum, M.
For normal magic squares of order n = 3, 4, 5, ..., the magic constants are: 15, 34, 65,
111, 175, 260, ...
We can generate a magic square of size n.
Consider the below examples:
Magic Square of size 3
-----------------------
2 7 6
9 5 1
4 3 8
Sum in each row & each column = 3*(3^2+1)/2 = 15
Magic Square of size 5
----------------------
9 3 22 16 15
2 21 20 14 8
25 19 13 7 1
18 12 6 5 24
11 10 4 23 17
Sum in each row & each column = 5*(5^2+1)/2 = 65

OUTPUT:  
1. 
2. 

## 5. Debug the following programs using gdb and execute commands in gdb.
a)
#include<stdio.h>
int sum(int n);
int main(void)
{
int n;
int c;
printf("Enter the value of n\n");
scanf("%d",&n);
c=sum(n);
printf("%d\n",c);
return 0;
}
int sum(int n)
{
int result;
int i;
for(i=0;i<n;i++)
{
result += i;
}
return result;
}
b)
#include<stdio.h>
int fact(int n);
int main(void)
{
int n;
int m;
printf("Enter the value of n\n");
scanf("%d",&n);
m=fact(n);
printf("%d",m);
return 0;
}
int fact(int n)
{
int i;
int f;
for (i=1;i<n;i++)
{
f=f*i;
}
return f;
}
OUTPUT:  
1. 
2. 