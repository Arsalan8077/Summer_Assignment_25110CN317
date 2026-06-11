#include<stdio.h>
int main ()
{
    int n,i,j;// deceleration of variables 
    printf("enter the size of square");
    scanf("%d",&n);
    for (i=1;i<=n;i++)// loop for couloumn
    {
    for(j=1;j<=n;j++) // loop for rows
    {
        if(i==1||i==n||j==1||j==n) // checks condition and prints star and space
        printf("* ");
        else
        printf("  ");
    }
     printf("\n");
    }
return 0;
}