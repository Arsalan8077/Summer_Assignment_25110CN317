#include <stdio.h>
int main()
{
    int n, sum =0 ; // initialisation of variables
     printf("enter the number");
     scanf("%d",&n);   // input from the user
    for (int i=1; i <= n;i++) // loop for adding natural numbers to the sum 
     sum+=i;
     printf("sum of n natural numbers=%d",sum);
     return 0;
}
      
