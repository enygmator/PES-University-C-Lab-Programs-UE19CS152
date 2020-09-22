#include<stdio.h>
#include<stdlib.h>
#include"2server.h"

int main()
{
	int n = 0;
	printf("Enter no. of students: ");
	scanf("%d", &n);
	Student* S = (Student*)malloc(n*sizeof(Student));
	Student* Sini = S;
	for (int i = 0; i < n; i++)
	{
		GetStudentDetails(Sini);
		CalculateStudentGrade(Sini);
		Sini++;
	}
	Sini = S;
	for (int i = 0; i < n; i++)
	{
		PrintStudentDetails(*Sini);
		Sini++;
	}	
	
	return 0;
}
