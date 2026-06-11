#include <stdio.h>
int reverse = 0;// recursive function to reverse a number
int reversenumber(int n)
{
  {
    if(n==0)// base case  
    return reverse; // stops when number becomes 0
    reverse=reverse*10+(n%10);// add last digit to reversed number 
  }
  return reversenumber(n/10); // recursive call with remaining digits 
}

int main ()
{ 
    int n;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    printf("revrsed number = %d\n",reversenumber(n));
    return 0;
}