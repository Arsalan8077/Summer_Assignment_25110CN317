#include <stdio.h>
int factorial(int n)// recursive function to find factorial
{
  {
    if(n==0||n==1)// base case // factorial pof zero and 1 is 1 
    return 1;
  }
  return n*factorial(n-1); // recursive case // n!=n*(n-1)!
}

int main ()
{ 
    int n;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    printf("Factorial of %d = %d\n",n,factorial(n));
    return 0;
}