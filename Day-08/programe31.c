#include<stdio.h>
int main ()
{
    int rows,i,j;// deceleration of variables 
    printf("enter the number of rows");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++)// loop for couloumn
    {
    for(j=0;j<=i;j++)// loop for rows
    {
    printf("%c",'A'+j);
    }
    printf("\n");
    }
return 0;
}