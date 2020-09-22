#include<stdbool.h>

typedef struct Date
{
    short dd;
    short mm;
    int yy;
} Date;

void InputDate(Date* date);
void PrintDate(Date date);
void DateCmp(Date d1, Date d2);