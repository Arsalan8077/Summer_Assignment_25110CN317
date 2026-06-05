#include<stdio.h>
int main()
{
    int n,sum=0,d; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    if(n==0) // checks if number is zero or not
     {
     sum=0;
     }
     else
     {
      while(n!=0) // loops run un til number becomes zero
        {
        d=n%10; // gives the last digit of the number 
        sum+=d;// add the digit to the sum 
        n=n/10;// removes the digit that is added to the sum 
        }
    }
     printf("sum of digits is=%d",sum);// print the desired result
     return 0;
}


