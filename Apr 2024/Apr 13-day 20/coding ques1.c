//Pattern printing

#include<stdio.h>  
int main()  
{  
    int num,i,j,k=1;   
    scanf("%d",&num);  
    for(i =1;i<=num;i++)  
    {  
        for(j =1;j<=i;j++)  
        {  
            printf("%d ",k++);
        }  
        printf( "\n");  
    }     
}  
/*
Input:
4
Output:
1
2 3
4 5 6
7 8 9 10
*/
