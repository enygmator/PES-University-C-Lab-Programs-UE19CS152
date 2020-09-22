typedef struct Employee
{
    int empID;
    char name[30], dept[10];
} Employee;

void PrintEmpDetails(Employee emp);
void ReadEmpDetails(Employee* emp);