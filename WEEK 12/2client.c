#include<stdio.h>
#include<stdlib.h>
#include"2server.h"

int main()
{
	int n;
	printf("Enter number of emps: ");
	scanf("%d", &n);
	Employee* empL = (Employee*)malloc(n*sizeof(Employee));
	Employee* emp = empL;
	for (int i = 0; i < n; i++, emp++)
	{
		printf("Enter details of emp %d\n", i);
		ReadEmpDetails(emp);
		printf("\n");
	}
	emp = empL;
	for (int i = 0; i < n; i++, emp++)
	{
		printf("Details of emp %d\n", i);
		PrintEmpDetails(*emp);
		printf("\n");
	}
	free(empL);
	return 0;
}
