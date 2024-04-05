/*2.2. Divide two integers without using division, multiplication and modulus operators
Example input:
Input: dividend = 10, divisor = 3
Output: 3
Explanation: 10/3 = 3.33333.. which is truncated to 3.
*/
#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,r;
    printf("Dividend:");
    scanf("%d",&n);
    printf("Divisor:");
    scanf("%d",&d);
    r=floor(n/d);
    printf("%d",r);
    return 0;
}
/*
Input:
Dividend:10
Divisor:3
Output:
3
*/
