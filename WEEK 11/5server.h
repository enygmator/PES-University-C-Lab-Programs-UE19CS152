typedef struct ListItem
{
    char item[30];
    int quantity;
    float unitPrice, totalPrice;
} ListItem;

void GetListItemDetails(ListItem* li);
void PrintBill(ListItem* item, int numberItems);