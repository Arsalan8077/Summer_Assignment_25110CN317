#include<stdio.h>
int main ()
{
    int n=5,i,j;// deceleration of variables 
    for (i=1;i<=n;i++)// loop for couloumn
    {
    for(j=1;j<=n - i;j++) // print spaces
    {
        
        printf(" ");
    }
        for(j=1;j<=(2 * i - 1);j++)//print '*'
    {
        printf("*");
    }
     printf("\n");
    }
return 0;
}