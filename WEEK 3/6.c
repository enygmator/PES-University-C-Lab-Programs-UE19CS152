#include <stdio.h>
#include <time.h>
int main(void)
{
    clock_t start, end;
    start = clock();
    char c;
    printf("Enter any character\n");
    scanf("%c",&c);
    end = clock();
    double duration = ((double)end - start)/CLOCKS_PER_SEC;
    printf("Time taken to execute in seconds : %f", duration);
    return 0;
}