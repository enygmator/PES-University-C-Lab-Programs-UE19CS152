typedef struct ll
{
    int val;
    struct ll* next;
} ll;

ll* StartLL();
void Display(ll* theLL);
ll* InsertFront(ll* theLL, int val);
ll* InsertEnd(ll* theLL, int val);
int SumAlternateNodes(ll* theLL);
int SumAllNodes(ll* theLL);
void SumEvenAndOddElements(ll* theLL);
ll* DeleteFront(ll* theLL);
ll* DeleteEnd(ll* theLL);
int SearchElement(ll* theLL, int ele);
int ProductOfDivisibles(ll* theLL, int div);