/*Inverted right half pyramid*/
#include <stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;--i)
   {
       for(j=1;j<=n-i;++j)
       {
           printf(" ");
       }
       for(k=1;k<=i;++k)
       {
           printf("*");
       }
       printf("\n");
   }
   return 0;
}
/*
Input:
Enter value of n:5
Output:
*****
 ****
  ***
   **
    *
*/
