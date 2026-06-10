#include <stdio.h>
int sumofdigits(int n)// recursive function to fnd sum of digits 
{
  {
    if(n==0)// base case  
    return 0; // if number becomes 0 , return 0
  }
  return (n%10) + sumofdigits(n/10); // recursive case // last digit + sum of remaining digits
}

int main ()
{ 
    int n;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    printf("Sum of digit =%d\n",sumofdigits(n));
    return 0;
}