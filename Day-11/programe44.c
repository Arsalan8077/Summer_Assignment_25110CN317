#include<stdio.h>
int factorial(int n) // function to find sum
{
    int fact =1;
    for(int i =1;i<=n;i++)
    {
        fact=fact*i;//find the factorial of the number
    }
    return fact;
}
int main ()
{
    int num=5;
    printf("factorial= %d\n",factorial(num));//calls the function
    return 0;
}