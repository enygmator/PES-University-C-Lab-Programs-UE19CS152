#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f1;
	char file1[100], ch[100], chr;
	int lines = 0;
	printf("Enter the name of the file: ");
	scanf(" %s", file1);
	f1 = fopen(file1, "w");
	if(f1==NULL)
	{
		printf("There was an error in creating the file\n");
		exit(0);
	}
	printf("How many lines do you wanna write: ");
	scanf("%d", &lines);
	getchar();
	for (int i = 0; i < lines; i++)
	{
		fgets(ch, 100, stdin);
		fputs(ch, f1);
	}
	fclose(f1);
	f1 = fopen(file1, "r");
	if(f1==NULL)
	{
		printf("There was an error in reading the file\n");
		exit(0);
	}
	printf("\nThe contents of the file now, are:\n");
	while ((chr = fgetc(f1)) != EOF)
	{
		fputc(chr, stdout);
	}	
	return 0;
}
