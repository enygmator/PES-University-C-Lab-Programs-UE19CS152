#include<stdio.h>
int main()
{
    char ch;
    int a, e, i, o, u, cons;
    a=e=i=o=u=cons=0;
    while ((ch = getchar())!='\n')
    {
        if ((ch>=65 && ch <= 90) || (ch>=97 && ch<=122))
        {
            switch (ch)
            {
                case 'a': case 'A': a++; break;
                case 'e': case 'E': e++; break;
                case 'i': case 'I': i++; break;
                case 'o': case 'O': o++; break;
                case 'u': case 'U': u++; break;
                default : cons++; break;
            }
        }
    }
    printf("a:%d\ne:%d\ni:%d\no:%d\nu:%d\nconsonants:%d\n",a,e,i,o,u,cons);
    return 0;
}