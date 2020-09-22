#include<stdio.h>
#include<stdlib.h>
#include"1server.h"

int LLLen(ll* llFirstNode)
{
    int len = 0;
    ll* llNode = llFirstNode;
    while (llNode != NULL)
    {
        len++;
        llNode = llNode->next;
    }    
    return len;
}

ll* StartLL()
{    
    ll* llFirstNode = NULL;
    return llFirstNode;
}

void Display(ll* theLL)
{
    int len = LLLen(theLL);
    if (len == 0)
    {
        printf("The Linked list is empty");
        return;
    }else
    {
        printf("Length of LL is: %d\n", len);
    }
    printf("Linked List:\n");
    ll* llNode = theLL;
    for (; llNode != NULL; llNode = llNode->next)
    {
        printf("|%d| > ", llNode->val);
    }
    printf("NULL\n");
}

ll* InsertFront(ll* theLL, int val)
{
    ll* llNode = (ll*)malloc(sizeof(ll));
    llNode->val = val;
    llNode->next = theLL;
    return llNode;
}

ll* InsertEnd(ll* theLL, int val)
{
    ll* llNode = theLL;
    if (llNode == NULL)
    {
        llNode = (ll*)malloc(sizeof(ll));
        llNode->val = val;
        llNode->next = NULL;
        return llNode;
    }
    else
    {
        while (llNode->next != NULL) llNode = llNode->next;
        llNode->next = (ll*)malloc(sizeof(ll));
        llNode = llNode->next;
        llNode->val = val;
        llNode->next = NULL;
        return theLL;
    }
}

int SumAlternateNodes(ll* theLL)
{
    int sum = 0;
    ll* llNode = theLL;
    while (llNode != NULL)
    {
        sum+=llNode->val;
        llNode = llNode->next;
        if(llNode!=NULL) llNode = llNode->next;
    }
    
    return sum;
}

int SumAllNodes(ll* theLL)
{
    int sum = 0;
    ll* llNode = theLL;
    while (llNode != NULL)
    {
        sum+=llNode->val;
        llNode = llNode->next;
    }
    return sum;
}

void SumEvenAndOddElements(ll* theLL)
{
    int even = 0, odd = 0;
    ll* llNode = theLL;
    while (llNode != NULL)
    {
        if(llNode->val % 2 == 0) even+=llNode->val; else odd+=llNode->val;
        llNode = llNode->next;
    }
    printf("Sum of elements of node: even: %d odd: %d", even, odd);
}

ll* DeleteFront(ll* theLL)
{
    ll* llNode = theLL;
    ll* prevNode = llNode;
    llNode = llNode->next;
    free(prevNode);
    return llNode;
}

ll* DeleteEnd(ll* theLL)
{
    ll* llNode = theLL;
    ll* prevNode = llNode;
    while (llNode->next!=NULL)
    {
        prevNode = llNode;
        llNode = llNode->next;
    }
    free(llNode);
    prevNode->next = NULL;
    return theLL;
}

int SearchElement(ll* theLL, int ele)
{
    int j = 1;
    ll* llNode = theLL;
    while (llNode != NULL)
    {
        if (llNode->val == ele) return j;
        j++;
        llNode = llNode->next;        
    }
    return -1;
}

int ProductOfDivisibles(ll* theLL, int div)
{
    int pro = 1, yes = 0;
    ll* llNode = theLL;
    while (llNode != NULL)
    {
        if (llNode->val % div == 0)
        {
            pro*=llNode->val;
            yes = 1;
        }        
        llNode = llNode->next;
    }
    return yes?pro:0;
}