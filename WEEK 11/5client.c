#include<stdio.h>
#include<stdlib.h>
#include"5server.h"

int main()
{
	int n;
	printf("How many unique items do you wanna add: ");
	scanf("%d", &n);
	ListItem* lis = (ListItem*)malloc(n*sizeof(ListItem));
	ListItem* liPtr = lis;
	for (int i = 0; i < n; i++)
	{
		printf("Enter Item %d details:\n", i);
		GetListItemDetails(liPtr);
		printf("\n");
		liPtr++;
	}
	PrintBill(lis, n);
	return 0;
}
