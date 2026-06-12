#include<stdio.h>
int isPrime(int n) // function to find sum
{
    int i;
    if(n<=1)
    return 0;
    for(i=2;i<n;i++)//checks the prime number 
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main ()
{
    int num =7; 
    if (isPrime(num))// call the function 
    printf("prime number");
    else
    printf("Not a prime number");
    return 0;
}     