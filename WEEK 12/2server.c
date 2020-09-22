#include<stdio.h>
#include"2server.h"

void ReadEmpDetails(Employee* emp)
{
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp->name);
    printf("Enter empID: ");
    scanf("%d", &emp->empID);
    printf("Enter Dept of emp: ");
    scanf(" %[^\n]", emp->dept);
}

void PrintEmpDetails(Employee emp)
{
    printf("Name: %s\nempID: %d\nDept.: %s\n", emp.name, emp.empID, emp.dept);
}