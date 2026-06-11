int factorial(int n) // function for factorial of the number
{
 int fact =1,i;
 for(i=1;i<=n;i++)
{
    fact = fact*i;
}
 return fact;
}
#include <stdio.h>
int main ()
{ 
    int n,i,temp,digit,sum=0;// decleration of variables
    printf("enter the number");
    scanf(" %d",&n);// input the number from the user
    temp=n;
    while(temp>0) // checks if  the number is greater than zero
    {
        digit= temp%10; // givwe the last digit in form of reminder
        sum+= factorial(digit); // add the digit in sum with the factorial of that number 
        temp/=10; // remopves the last digit of the number 
    }
     if(sum==n) // checks if sum is equal topn original number or not
     printf("%d is a strong number.",sum);
     else
     printf("%d is not a perfect number",sum);
     return 0;
}
