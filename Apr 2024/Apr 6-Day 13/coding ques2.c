/*Concatenate Two Strings*/

#include <stdio.h>
#include<string.h>
int main()
{
    char s1[1000],s2[1000];
    printf("Enter two strings:");
    scanf("%[^\n]\n%[^\n]",s1,s2);
    
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    printf("%s",s1);
    return 0;
}
/*
Input:
Enter two strings:Hello!
I am jayasree
Output:
Hello!I am jayasree
*/
