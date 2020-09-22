#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f1, *f2, *f3;
	char file1[100], file2[100], file3[100], ch;
	printf("Enter the name of first file: ");
	scanf(" %s", file1);
	printf("Enter the name of second file: ");
	scanf(" %s", file2);
	printf("Enter the name of file to merge to: ");
	scanf(" %s", file3);
	f1 = fopen(file1, "r");
	f2 = fopen(file2, "r");
	f3 = fopen(file3, "w");
	if(f1==NULL || f2==NULL || f3==NULL)
	{
		printf("There was an error in opening the files\n");
		exit(0);
	}
	while ((ch = fgetc(f1)) != EOF) fputc(ch, f3);
	while ((ch = fgetc(f2)) != EOF) fputc(ch, f3);
	printf("Files have been merged\n");
	fclose(f1);
	fclose(f2);
	fclose(f3);
	return 0;
}
