#include<stdio.h>
#include<stdlib.h>

int areEqual(FILE *f1, FILE *f2)
{
	char ch1, ch2;
	while (1)
	{
		ch1 = fgetc(f1);
		ch2 = fgetc(f2);
		if(ch1==EOF && ch2 == EOF) return 1;
		if(ch1==EOF || ch2 == EOF) return 0;
		if(ch1!=ch2) return 0;
	}
}

int main()
{
	FILE *f1, *f2, *f3;
	char file1[100], file2[100], ch1, ch2;
	printf("Enter the name of first file: ");
	scanf(" %s", file1);
	printf("Enter the name of second file: ");
	scanf(" %s", file2);
	f1 = fopen(file1, "r");
	f2 = fopen(file2, "r");
	if(f1==NULL || f2==NULL)
	{
		printf("There was an error in opening the files\n");
		exit(0);
	}
	printf("FILE1:\n");
	while ((ch1 = fgetc(f1)) != EOF) fputc(ch1, stdout);
	printf("\nFILE2:\n");
	while ((ch2 = fgetc(f2)) != EOF) fputc(ch2, stdout);
	rewind(f1);
	rewind(f2);
	printf("\nThe two files%shave the same content\n", areEqual(f1,f2)?" ":" do not ");
	return 0;
}
