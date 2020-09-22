# Student should learn user-defined functions and recursion

## 1. Write a function for factorial using recursion and use it to find C(n, r)

OUTPUT:
1. Enter n and r: 5 3  
nCr is: 10
2. Enter n and r: 7 4  
nCr is: 35
## 2. Read input from the user and write the functions for the following: i) Armstrong numberii) Perfect number

OUTPUT:
1. Enter a number: 6  
perfect: Yes armstrong: Yes
2. Enter a number: 19  
perfect: No armstrong: No
3. Enter a number: 153  
perfect: No armstrong: Yes
## 3. Write a function to if a number is prime and find the next prime number

OUTPUT:
1. Enter a number: 42  
42 is not prime and next prime is: 43
2. Enter a number: 13  
13 is prime and next prime is: 17
## 4.  Write  a  user-defined  functions  to  convert  Decimal  number  to  equivalent  Binary and Octal number

OUTPUT:
1. 1 - Decimal to Bin  
2 - Decimal to Oct  
any key to exit  
enter your choice: d  
Enter a number: 12
2. 1 - Decimal to Bin  
2 - Decimal to Oct  
any key to exit  
enter your choice: 1  
Enter a number: 12  
1100
3. 1 - Decimal to Bin  
2 - Decimal to Oct  
any key to exit  
enter your choice: 2  
Enter a number: 78  
116

steps to compile and execute:
gcc filename.c -lm //linking to math library
./a.out

## 5. Write  a  function  to  count  the  digits  and  find  the  sum  of  digits  of  a  given  number using recursion

OUTPUT:
1. Enter a number: 12  
digits: 2 sum: 3
2. Enter a number: 345  
digits: 3 sum: 12

## 6. Write a function to output the following using recursion

OUTPUT:  
Enter no. of rows: 6  
1  
2 3  
4 5 6  
7 8 9 10  
11 12 13 14 15  
16 17 18 19 20 21  

## 7. Write a function to find the Hailstone Sequence of a given number upto 1
>Input a positive integer n:  
i) If n  is  1then the sequence ends.  
ii) If n is eventhen the next  element = n/2  
iii) If n is oddthen the next element= (3 * n) + 1  
Repeat step (ii) to (iii) until step (i)

OUTPUT:
1. Enter number: 13  
13 40 20 10 5 16 8 4 2 1
2. Enter number: 6  
6 3 10 5 16 8 4 2 1