# All programs written this week with the output

## Objective

Students will learn Input, Output functions and its formatting,escape sequence,variable declaration & definition, different data types and different Errors in C program.

### Program 1

**Problem statement:**

Write a program in 'C' to output below string:

```c
#include <stdio.h>
int main()
{
    printf("Hello world\n");
    return 0;
}
```

**Solution:**

```c
#include<stdio.h>
int main(void)
{
printf("#include<stdio.h>\n");
printf("int main()\n");
printf("{\n");
printf("\tprintf(\"Hello world\");\n");
printf("\treturn 0;\n");
printf("}\n");
return 0;
}
```

### Program 2

**Problem statement:**

Write a program to swap two variables using another variable.

Sample output:

```
Enter value of a and b
3 4
Before swapping: Value of a is 3 and b is 4
After swapping: Value of a is 4 and b is 3
```

**Solution:**

```c
#include<stdio.h>
int main(void)
{
 int a;
 int b;
 int temp;
 printf("Enter value of a and b");
 scanf("%d%d",&a,&b);
 printf("Before swapping: the values of a is %d and b is %d\n",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("After swapping: the values of a is %d and b is %d\n", a,b);
 return 0;
}
```

### Program 3

**Problem statement:**

Write a program to read the student information such as roll
number,name,semester,section,phone number, marks,percentage from the user and display it
in the same order.

Sample Output:

```
The details of student:
Roll no: 123
Name: Pooja
Semester: 3
Section:A
Phone_no: 1234567890
Marks: 56.000000
Percentage: 78.000000
```

**Solution:**

```c
#include<stdio.h>
int main(void)
{
int roll_no;
char name[20];
unsigned int semester;
char section;
long int phone_no;
double marks;
float percentage;
printf("enter roll_no\n");
scanf("%d",&roll_no);
printf("enter name\n");
scanf("%s",name);
printf("enter semester\n");
scanf("%u",&semester);
printf("\nEnter Section\n");
scanf(" %c",&section);
printf("enter phone_no\n");
scanf("%ld",&phone_no);
printf("enter marks\n");
scanf("%lf",&marks);
printf("enter percentage\n");
scanf("%f",&percentage);
printf("The details of student:");
printf("\nRoll no: %d\n",roll_no);
printf("\nName: %s\n",name);
printf("\nSemester: %u\n",semester);
printf("\nSection:%c\n",section);
printf("\nPhone_no: %ld\n",phone_no);
printf("\nMarks: %lf\n",marks);
printf("\nPercentage: %f\n",percentage);
}

```

### Program 4

**Problem statement 1:**

Write a program to calculate the euclidean distance between two points.

Sample Output:

```
Input x1: 3
Input y1: 4
Input x2: 4
Input y2: 3
Distance between the points: 1.414214
```

**Solution 1:**

```c
#include <stdio.h>
#include <math.h>
int main(void)
{
float x1;
float y1;
float x2;
float y2;
float gdistance;
printf("Input x1:");
scanf("%f", &x1);
printf("Input y1:");
scanf("%f", &y1);
 printf("Input x2:");
scanf("%f", &x2);
printf("Input y2:");
scanf("%f", &y2);
gdistance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
printf("Distance between the points: %f", gdistance);
printf("\n");
return 0;
}
```

steps to compile and execute:

```powershell
gcc filename.c -lm //linking to math library
./a.out
```

**Problem statement 2:**

Write a C program to find Area of a triangle, if three sides are given.

Sample Output:

```
For ExampleEnter the values of a, b and c
6.0
5.0
7.0
Area of a triangle = 14.696938
```

**Solution 2:**

```c
#include <stdio.h>
#include <math.h>
int main()
{
double s;double a;double b;double c;double area;
printf("Enter the values of a, b and c \n");
scanf("%lf %lf %lf", &a, &b, &c);
s = (a + b + c) / 2; // compute s
area = sqrt(s * (s - a) * (s - b) * (s - c));
printf("Area of a triangle = %lf \n", area);
return 0;
}
```

steps to compile and execute:

```powershell
gcc filename.c -lm //linking to math library
./a.out
```

### Program 5

Identify errors if any in the below codes, by executing different steps with gcc options :
Hint-Compile time ,link time or runtime.

**Code 1:**


```c
#include <stdio.h>
int main(void)
{
printf("Hello world\n")
return 0;
}
```

**Solution 1:**

Output:

```powershell
gcc filename.c
filename.c: In function ‘main’:
filename.c:5:1: error: expected ‘;’ before ‘return’
return 0;
^
```

Error:  
Error-Compile time Error (or Syntax Error)

**Code 2:**

```c
#include <stdio.h>
int main(void)
{
printf("Result =%d\n",25/0);
return 0;
}
```

**Solution 2:**

Output:

```powershell
gcc filename.c
filename.c: In function ‘main’:
filename.c:4:25: warning: division by zero [-Wdiv-by-zero]
printf("Result =%d\n",25/0);
 ^
./a.out
Floating point exception (core dumped)

```

Error:  
Floating point exception (core dumped)

**Code 3:**

```c
#include <stdio.h>
int main(void)
{
int x;
int y;
float ratio;
printf("Enter x and y value to find ratio\n");
scanf("%d %d",&x,&y);
ratio=(x+y)/(x-y);
printf("Result of ratio=%f\n",ratio);
return 0;
}
```

**Solution 3:**

Output:

```powershell
./a.out
Enter x and y value to find ratio
3
3
Floating point exception (core dumped)
```

Error:  
Error-Runtime Error

**Code 4:**

```c
#include <stdio.h>
int main(void)
{
int a;
a=a+11;//use of uninitialized local variable, value is garbage; undefined
printf("a=%d\n",a);
return 0;
}
```

**Solution 4:**

Output:

```powershell
$gcc filename.c
$./a.out
a= 11 (Some unexpected result)

```

Error:  
Logical Error

**Code 5:**

```c
#include <stdio.h>
int main(void)
{
int a=10;int b;char c='A';
b=a*c;
printf("b=%d\n",b);
return 0;
}
```

**Solution 5:**

Output:

```powershell
b=650 //Some unexpected result

```

Error:  
Semantic error

**Code 6:**

```c
#include <stdio.h>
int main(void)
{
Printf("Hello World\n");
return 0;
}
```

**Solution 6:**

Output:

```powershell
gcc filename.c
filename.c: In function ‘main’:
filename.c:4:1: warning: implicit declaration of function ‘Printf’ [-Wimplicit-function-declaration]
Printf("Hello World\n");
^
/tmp/cccpXg0O.o: In function `main':
filename.c:(.text+0xf): undefined reference to `Printf'
collect2: error: ld returned 1 exit status
./a.out
bash: ./a.out: No such file or directory

```

Error:  
Link time or Linker Error

**Code 7:**

```c
#include <stdio.h>
int main(void)
{
printf("%s %s","apple","kiwi\n","orange\n");
printf("%s %s %s %s\n","apple","kiwi","orange\n");
return 0;
}
```

**Solution 7:**

Output:

```powershell
gcc filename.c
filename.c: In function ‘main’:
filename.c:4:8: warning: too many arguments for format [-Wformat-extra-args]
printf("%s %s","apple","kiwi\n","orange\n");
 ^
filename.c:5:8: warning: format ‘%s’ expects a matching ‘char *’ argument [-Wformat=]
printf("%s %s %s %s\n","apple","kiwi","orange\n");
 ^
./a.out
apple kiwi
apple kiwi orange
(null)

```

Error:  
Undefined Behavior
