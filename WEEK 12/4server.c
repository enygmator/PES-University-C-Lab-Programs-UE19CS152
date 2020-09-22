#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"4server.h"

char subs[6][3] = {"CSE", "BIO", "ECE", "MAT", "PHY", "CHY"};

void AllotDefaultCourses(Course* cses)
{
    for (int i = 0; i < 6; i++)
    {
        cses[i].code = 100+i;
        strcpy(cses[i].name, (char []){subs[i][0],subs[i][1],subs[i][2]});
    }
}

void PrintCourses(Course* cses, int no)
{
    printf("Course code\tCourse Name\n");
    printf("--------------------------\n");    
    for (int i = 0; i < no; i++) printf("%d\t\t%s\n", cses[i].code, cses[i].name);
}

void ReallocCourses(Course* cses, int no)
{
    cses = realloc(cses, no*sizeof(Course));
    printf("\nEnter course numbers:\n");
    int cno = 0;
    for (int i = 0; i < no; i++)
    {
        scanf("%d", &cno);
        cses[i].code = cno;
        cno%=100;
        strcpy(cses[i].name, (char []){subs[cno][0],subs[cno][1],subs[cno][2]});
    }
    printf("\n");
}