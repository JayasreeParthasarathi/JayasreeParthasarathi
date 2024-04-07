/*Find the Length of a String*/

#include <stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    printf("Enter a string:");
    scanf("%[^\n]",s);
    int l=strlen(s);
    printf("%d",l);
    return 0;
}
/*
Input:
Enter a string:I am jayasree
Output:
13
*/
