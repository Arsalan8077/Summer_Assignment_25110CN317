#include<stdio.h>
int main ()
{
    int n=5,i,j;// deceleration of variables 
    for (i=1;i<=n;i++)// loop for couloumn
    {
    for(j=0;j<i;j++) // ascending number
    {
        
        printf("%c",'A' + j);
    }
        for(j=i-2;j>=0;j--)//descending number
    {
        printf("%c",'A' + j);
    }
     printf("\n");
    }
return 0;
}