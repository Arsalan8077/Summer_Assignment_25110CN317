#include <stdio.h>
int fibonacci(int n)// recursive function to find fibonacci number
{
  {
    if(n==0)// base case // fibonacci(0)=0 
    return 0;
    if(n==1)
    return 1;// fibonacci (1)=1
  }
  return fibonacci(n-1)+fibonacci(n-2); // recursive case // fib(n)=fib(n-1)+fib(n-2)
}

int main ()
{ 
    int n;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    printf("fibonacci series :\n");
    for( int i=0;i<n;i++)
    {
        printf("%d  ",fibonacci(i));
    }
    return 0;
}