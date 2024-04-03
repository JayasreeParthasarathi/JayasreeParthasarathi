/*write a program to print the non repeated characters in the string.
    input:
       character
    output:
        h t e
*/
#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    scanf("%[^\n]",s);
    int c[256]={0},i;
    for(i=0;i<strlen(s);i++)
    {
        c[s[i]]++;
    }
    for(i=0;i<strlen(s);i++)
    {
        if(c[s[i]]==1)
        {
            printf("%c ",s[i]);
        }
    }
    return 0;
}
/*Input:
  Jayasree
  Output:
  J y s r
*/
