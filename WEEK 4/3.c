#include<stdio.h>
int main()
{
    int n, m, rev=0;    
    printf("Enter a 4 digit number: ");
    scanf("%d", &n); m=n;
    while (n!=0)
    {
        rev = rev*10+(n%10);
        n/=10;
    }    
    printf(m==rev?"It is palindrome":"It is not palindrome");
    return 0;
}