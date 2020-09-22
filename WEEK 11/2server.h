#include<stdbool.h>
#define Pass true
#define Fail false

typedef bool result;

typedef struct Student
{
    char name[30];
    int mech, total, roll, ece, pswc, phy, mat;
    float avg;
    char resDiv[3];
    result res;
} Student;

void PrintStudentDetails(Student stu);
void CalculateStudentGrade(Student* stu);
void GetStudentDetails(Student* stu);