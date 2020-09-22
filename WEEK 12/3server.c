#include<stdio.h>
#include"3server.h"

void ReadStudents(Student* sList, int size)
{
    Student* stu = sList;
    for (int i = 0; i < size; i++, stu++)
    {
        printf("Enter the details of student %d:\n", i+1);
        printf("Name: ");
        scanf(" %[^\n]", stu->name);
        printf("Marks: ");
        scanf("%d", &stu->marks);
        printf("Roll: ");
        scanf("%d", &stu->roll);
        printf("\n");
    }
}

void PrintStudents(Student* sList, int size)
{
    Student* stu = sList;
    printf("Roll\tName\tMarks\n");
    printf("-----------------------------\n");
    for (int i = 0; i < size; i++, stu++)
     printf("%d\t%s\t%d\n", stu->roll, stu->name, stu->marks);
    printf("\n");
}

void sortMarksDesc(Student* sList, int size)
{
    Student tmp;
    Student* tStu;
    for (int i = 0; i < size-1; i++)
    {
        tStu = sList;
        for (int j = 0; j < size-i-1; j++)
        {
            if(tStu->marks < (tStu+1)->marks)
            {
                tmp = *tStu;
                *tStu = *(tStu+1);
                *(tStu+1) = tmp;
            }
            tStu++;
        }
    }
}