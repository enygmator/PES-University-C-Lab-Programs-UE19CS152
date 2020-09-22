#include<stdio.h>
#include"5server.h"

void GetListItemDetails(ListItem* li)
{
    printf("Enter Item Name: ");
    scanf(" %[^\n]", li->item);
    printf("Enter quantity: ");
    scanf("%d", &li->quantity);
    printf("Enter unit price: ");
    scanf("%f", &li->unitPrice);
    li->totalPrice = li->quantity*li->unitPrice;
}

float CalculateBill(ListItem* item, int numberItems)
{
    float bill = 0;
    for (int i = 0; i < numberItems; i++)
    {
        bill += item->totalPrice;
        item++;
    }
    return bill;
}

void PrintBill(ListItem* items, int numberItems)
{
    ListItem* item = items;
    printf("Item Name\tUnit Price\tQuantity\tItem Total\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < numberItems; i++)
    {
        printf("%s\t\t%f\t%d\t\t%f\n", item->item, item->unitPrice, item->quantity, item->totalPrice);
        item++;
    }
    printf("-------------------------------------------------------------\n");
	printf("GRAND TOTAL\t\t\t Rs.%f\n", CalculateBill(items, numberItems));
}