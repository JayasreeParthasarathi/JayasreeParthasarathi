/*Write a program to Calculate Fahrenheit to Celsius.*/
#include<stdio.h>
int main()
{
    int f;
    float r;
    printf("Enter the fahrenheit value:");
    scanf("%d",&f);
    r=((f-32)*5)/9;
    printf("%.3f",r);
    return 0;
}
/*
Input:
Enter the fahrenheit value:78
Output:
25.000
*/
