#include <stdio.h>
int main ()
{
    int n,flag; // variable decleration
    printf("enter the number ");
    scanf("%d",&n); // input number from the user
    if(n<=1)// cjecks whether the number is less than 1 or not
    {
    printf("the number is not prime");// if the number is < 1 the number is not prime
    }
    else
    {
        for(int i=2;i<n;i++)// loop to divide the number from 2 to n 
        {
            if(n%i==0)// checkes the number is completely divisible or not
            {
                flag=1;
                break;
            }
        }
    
     if(flag==1)// checks that the number is prime or not
     printf("the number is not prime");
     else
     printf("the number is prime");
    }
    return 0;
}
    
