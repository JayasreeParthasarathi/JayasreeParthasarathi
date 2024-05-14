/*Program to print quotient and remainder*/

#include<stdio.h>
int main()
{
    int n,d;
    printf("Enter numerator and denominator:");
    scanf("%d %d",&n,&d);
    int q=n/d;
    int r=n%d;
    printf("Quotient=%d",q);
    printf("\nRemainder=%d",r);
    return 0;
}
/*
Input:
Enter numerator and denominator:9 2
Output:
Quotient=4
Remiander=1
*/
