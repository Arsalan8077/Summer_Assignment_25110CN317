#include<stdio.h>
int main ()
{
    int rows,i,j;// deceleration of variables 
    printf("enter the number of rows");
    scanf("%d",&rows);
    for (i=rows;i>=1;i--)// loop for couloumn
    {
    for(j=1;j<=i;j++) // loop for rows
    {
    printf("%d",j);
    }
    printf("\n");
    }
return 0;
}