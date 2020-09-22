#include<stdio.h>
#include"1server.h"

void PrintList()
{
	printf("0 -> Show this list\n1 ->  Display\n2 -> Insert at the front\n3 -> Insert at the end\n4 -> Sum of the alternate nodes\n5 -> Sum ");
	printf("of the nodes\n6 -> Sum of even and odd nodes\n7 -> delete at the front\n8 -> delete at the end\n9 -> Search an ");
	printf("element\n10 -> Product of nodes of linked list divisible by a number\n11 -> Exit");
}

int main()
{
	int nodes = 0, ch = 1, val = 0;
	printf("How many nodes do you want: ");
	scanf("%d", &nodes);
	ll* llFirstNode = StartLL();
	for (int i = 0; i < nodes; i++)
	{
		printf("Enter value to insert: ");
		scanf("%d", &val);
		llFirstNode = InsertEnd(llFirstNode, val);
	}
	PrintList();
	while (ch != 11)
	{
		printf("\nChoose from above options: ");
		scanf("%d", &ch);
		printf("\n---------------\n");
		switch (ch)
		{
		case 0:
			PrintList();
			break;
		case 1:
			Display(llFirstNode);
			break;
		case 2:
			printf("Enter value to insert: ");
			scanf("%d", &val);
			llFirstNode = InsertFront(llFirstNode, val);
			break;
		case 3:
			printf("Enter value to insert: ");
			scanf("%d", &val);
			llFirstNode = InsertEnd(llFirstNode, val);
			break;
		case 4:
			printf("Sum of alternate Nodes is: %d",SumAlternateNodes(llFirstNode));
			break;
		case 5:
			printf("Sum of all Nodes is: %d",SumAllNodes(llFirstNode));
			break;
		case 6:
			SumEvenAndOddElements(llFirstNode);
			break;
		case 7:
			llFirstNode = DeleteFront(llFirstNode);
			break;
		case 8:
			llFirstNode = DeleteEnd(llFirstNode);
			break;
		case 9:
			printf("Enter value to search: ");
			scanf("%d", &val);
			val = SearchElement(llFirstNode, val);
			if(val==-1) printf("Element not found"); else
			printf("Element found at position (from 1) : %d", val);
			break;
		case 10:
			printf("Enter value to check division of elements with: ");
			scanf("%d", &val);
			val = ProductOfDivisibles(llFirstNode, val);
			if(val==0) printf("No such element found"); else
			printf("Product is : %d", val);
			break;
		case 11:
			printf("Exiting...");
			break;
		default:
			printf("Invalid Input\n");
			PrintList();
			break;
		}
		printf("\n---------------\n");
	}
	return 0;
}
