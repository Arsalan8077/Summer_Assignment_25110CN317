#include <stdio.h>
int main ()
{ 
    int n,i,largestprime;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    for(i=2;i<=n;i++)// loop for the valiue ofni
    {
        while(n%i==0) // checks number is divisible or not
        {
            largestprime=i;// stores the value of i
            n=n/i;// divide the number with i
        }
    }
    printf("%d is the largest prime factor",largestprime);
    return 0;
}