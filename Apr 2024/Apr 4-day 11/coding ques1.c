/*1.) Write a Program to convert the binary number into a decimal number.*/

#include <stdio.h>
#include<math.h>
int main()
{
    long n,rem,dec=0;
    printf("Enter a binary number:");
    scanf("%ld",&n);
    for(int i=0;n>0;i++)
    {
        rem=n%10;
        dec=dec+(rem*pow(2,i));
        n=n/10;
    }
    printf("%ld",dec);
    return 0;
}
/*
Input:                                  Input:
Enter a binary number:1000              Enter a binary number:10111
Output:                                 Output:
8                                       23
*/
