#include<stdio.h>
#include<string.h>
#include"2server.h"

void GetStudentDetails(Student* stu)
{
    printf("Enter student details:\nName: ");
    scanf(" %[^\n]", stu->name);
    printf("SRN: ");
    scanf("%d", &stu->roll);
    printf("marks in physics: ");
    scanf("%d", &stu->phy);
    printf("marks in maths: ");
    scanf("%d", &stu->mat);
    printf("marks in electronics: ");
    scanf("%d", &stu->ece);
    printf("marks in problem solving with c: ");
    scanf("%d", &stu->pswc);
    printf("marks mech: ");
    scanf("%d", &stu->mech);
    printf("\n");
}

void CalculateStudentGrade(Student* stu)
{
    stu->total = stu->mat+stu->ece+stu->phy+stu->pswc+stu->mech;
    stu->avg = stu->total/5;
    stu->res = stu->avg>=40 ? Pass : Fail;
    if (stu->avg >= 85) strcpy(stu->resDiv, "FCD"); else if (stu->avg >= 60) strcpy(stu->resDiv, "FC"); 
    else if (stu->avg >= 50) strcpy(stu->resDiv, "SC"); else if (stu->avg >= 40) strcpy(stu->resDiv, "TC");
    else strcpy(stu->resDiv, "FAIL");
}

void PrintStudentDetails(Student stu)
{
    printf("Student details:\n------------------------\n");
    printf("Name: %s\n", stu.name);
    printf("SRN: %d\n", stu.roll);
    printf("marks in physics: %d\n", stu.phy);
    printf("marks in maths: %d\n", stu.mat);
    printf("marks in electronics: %d\n", stu.ece);
    printf("marks in problem solving with c: %d\n", stu.pswc);
    printf("marks mech: %d\n", stu.mech);
    printf("Total marks: %d\n", stu.total);
    printf("Avg. marks: %f\n", stu.avg);
    printf("Result: %s\n", stu.res?"Pass":"Fail");
    printf("Division: %s\n", stu.resDiv);
}