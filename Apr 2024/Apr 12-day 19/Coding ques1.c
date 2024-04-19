/*Integer Palindrome Check: Write a program that checks if a given integer is a palindrome.*/

#include<stdio.h>  
int main()    
{    
int n,r,sum,t;    
scanf("%d",&n);    
t=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(t==sum)    
printf("Palindrome number");    
else    
printf("Not palindrome");   
}
/*
Input:
123321
Output:
Palindrome number
*/
