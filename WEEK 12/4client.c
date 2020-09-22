#include<stdio.h>
#include<stdlib.h>
#include"4server.h"

int main()
{
	Course* cses = (Course*)malloc(6*sizeof(Course));
	AllotDefaultCourses(cses);
	PrintCourses(cses, 6);
	int n;
	printf("How many courses do you want: ");
	scanf("%d", &n);
	ReallocCourses(cses, n);
	printf("The courses you selected are:\n");
	PrintCourses(cses, n);
	return 0;
}
