typedef struct Course
{
    int code;
    char name[20];
} Course;

void AllotDefaultCourses(Course* cses);
void PrintCourses(Course* cses, int no);
void ReallocCourses(Course* cses, int no);