/*Check whether a number is a palindrome.*/
#include <stdio.h>
int main()
{
    int n,rev=0,ud,t;
    printf("Enter value of n:");
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        ud=n%10;
        rev=(rev*10)+ud;
        n=n/10;
    }
    if(t==rev)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome");
    }
    return 0;
}
/*
Input:
Enter value of n:121
Output:
Palindrome
*/
