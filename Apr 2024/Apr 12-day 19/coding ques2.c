/*Greatest Common Divisor (GCD): Write a program to find the GCD of two integers using the Euclidean algorithm*/

#include<stdio.h>
int gcd(int a, int b)
{
	if (a==0)
		return b;
	return gcd(b%a,a);
}
int main()
{
    int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));
}
/*
Input:
12 15
Output:
3
*/
