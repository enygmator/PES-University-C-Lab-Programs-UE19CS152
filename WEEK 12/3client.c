#include<stdio.h>
#include<stdlib.h>
#include"3server.h"

int main()
{
	int n;
	printf("Enter number of students: ");
	scanf("%d", &n);
	Student* sList = (Student*)malloc(n*sizeof(Student));
	ReadStudents(sList, n);
	printf("Before sorting:\n");
	PrintStudents(sList, n);
	sortMarksDesc(sList, n);
	printf("After sorting:\n");
	PrintStudents(sList, n);
	free(sList);
	return 0;
}
