/*Write a Program to Check if a number is an Armstrong number or not.*/
#include <stdio.h>
#include<math.h>
int main()
{
    int n,d=0,i,sum=0,t;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d++;
    }
    t=n;
    while(n>0)
    {
        sum=sum+pow(n%10,d);
        n=n/10;
    }
    if(t==sum)
    {
        printf("Armstrong number");
    }
    else
    {
        printf("Not an armstrong number");
    }
    return 0;
}
/*
Input:                          Input:
153                             470
Output:                         Output:
Armstrong number                Not an armstrong number
*/
