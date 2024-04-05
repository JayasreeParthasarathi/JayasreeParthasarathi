/*2.)Write a C Program to check if two numbers are equal without using the bitwise operator*/
#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter two values:");
    scanf("%d %d",&n,&m);
    if(n-m==0)
    {
        printf("The numbers are equal");
    }
    else
    {
        printf("The numbers are not equal");
    }
    return 0;
}
/*
Input:
Enter two values:30 30
Output:
The numbers are equal
*/
