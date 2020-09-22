#include<stdio.h>
#include"2server.h"

int main()
{
	int a,b,c;
	int p,q,r;
	printf("Enter the dimensions of matrix A: ");
	scanf("%d%d%d", &a, &b, &c);
	int arr1[a][b][c];
	printf("Enter the dimensions of matrix B: ");
	scanf("%d%d%d", &p, &q, &r);
	int arr2[p][q][r];
	printf("Read matrix A: ");
	read3DArray(&arr1[0][0][0], a,b,c);
	print3DArray(&arr1[0][0][0], a,b,c);
	printf("Read matrix B: ");
	read3DArray(&arr2[0][0][0], p, q, r);
	print3DArray(&arr2[0][0][0], p, q, r);
	if (a==p && b==q && c==r) 
	{
		int sum[a][b][c];
		sum3DArray(&arr1[0][0][0], &arr2[0][0][0], &sum[0][0][0], a, b, c);
		printf("The sum of the two 3D Matrices: ");
		print3DArray(&sum[0][0][0], a, b, c);
	}
	else printf("Addition of matrices not possible!");
	return 0;
}
