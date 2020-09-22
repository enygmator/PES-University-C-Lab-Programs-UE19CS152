#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE* f1, *f2;
	char file1[100], ch[100], chr, rew[100];
	int line = 1;
	printf("Enter the name of the file: ");
	scanf(" %s", file1);
	f1 = fopen(file1, "r");
	if(f1==NULL)
	{
		printf("There was an error in reading the file\n");
		exit(0);
	}
	printf("The contents of the file are:\n\n");
	while ((chr = fgetc(f1)) != EOF)
	{
		fputc(chr, stdout);
	}
	printf("\n\nWhich line do you wanna re-write: ");
	scanf("%d", &line);
	printf("Write the line: ");
	scanf(" %[^\n]", rew);
	rewind(f1);
	f2 = fopen("copy.txt", "w");
	int i = 1;
	while (fgets(ch, 100 ,f1) != NULL)
	{
		if(i == line)
		{
			fputs(rew, f2);
			fputc('\n', f2);
			i++;
			continue;
		}
		fputs(ch, f2);
		i++;
	}
	remove(file1);
	fclose(f1);
	rename("copy.txt", file1);
	fclose(f2);
	f1 = fopen(file1, "r");
	if(f1==NULL)
	{
		printf("There was an error in reading the file\n");
		exit(0);
	}
	printf("\nThe contents of the file are:\n\n");
	while ((chr = fgetc(f1)) != EOF)
	{
		fputc(chr, stdout);
	}
	printf("\n");
	return 0;
}