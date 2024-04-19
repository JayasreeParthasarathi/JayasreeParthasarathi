//Program to find an alphabet by vowel or consonant
#include<stdio.h>
#include<ctype.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    ch=tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("%c is vowel",ch);
    }
    else
    {
        printf("\n%c is consonant",ch);
    }
}
/*
Input:
abcd
Output:
a is vowel
b is consonant
c is consonant
d is consonant
*/
