typedef struct Student
{
    int roll, marks;
    char name[30];
} Student;

void ReadStudents(Student* sList, int size);
void PrintStudents(Student* sList, int size);
void sortMarksDesc(Student* sList, int size);