#include<stdio.h>
#include"1server.h"

void DrawPascal(int lines)
{
    int arr[lines][lines];
    for (int line = 1; line <= lines; line++)
    {
        int c = 1;
        for (int pos = 1; pos <= line; pos++)
        {
            arr[line-1][pos-1] = c;
            c = c*(line-pos)/pos;
        }
    }

    for (int line = 1; line <= lines; line++)
    {
        for (int k = lines; k > line; k--) printf(" ");
        for (int pos = 1; pos <= line; pos++) printf("%d ", arr[line-1][pos-1]);
        printf("\n");
    }
}