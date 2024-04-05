/* Write a program to Check Whether a Number is Positive, Negative, or Zero.*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==0)
    {
        printf("The number is zero");
    }
    else if(n>0)
    {
        printf("Positive number");
    }
    else
    {
        printf("Negative number");
    }
    return 0;
}
/*
Input:
Enter the number:23
Output:
Positive number
*/
