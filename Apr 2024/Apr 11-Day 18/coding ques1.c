/*Program to check whether given year is leap year or not*/
#include<stdio.h>
int main()
{
    int ak;
    scanf("%d",&ak);
    if((ak%400==0) || (ak%4==0 && ak%100!=0))
    {
        printf("It is leap year");
    }
    else
    {
        printf("it is not a leap year");
    }
}
/*
Input:
1999
Output:
It is not a leap year
*/
