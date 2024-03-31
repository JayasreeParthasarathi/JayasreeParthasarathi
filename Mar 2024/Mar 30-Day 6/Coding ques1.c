/*Get an integer from the user and print lucky number if the sum of odd numbers in a number is even else print not lucky number.
Sample Input 1:                            Sample Input 2:
351                                        5638
Output:                                    Output:
Not lucky number                           Lucky number
Explanation:                               Explanation:
3+5+1=9.9 is not an even number            5+3=8. 8 is an even number*/

#include <stdio.h>
int main()
{
    int n,sum=0,ud;
    scanf("%d",&n);
    while(n>0)
    {
        ud=n%10;
        if(ud%2==1)
        {
            sum=sum+ud;
        }
        n=n/10;
    }
    if(sum%2==0)
    {
        printf("Lucky number");
    }
    else
    {
        printf("Not lucky number");
    }
    return 0;
}
/*Input:            Input:
5672                531
Output:             Output:
Lucky number        Not lucky number
*/

