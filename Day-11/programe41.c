#include<stdio.h>
int sum (int a, int b) // function to find sum
{
    return a+b;//add the 2 numbers
}
int main ()
{
    int n1=5 , n2=3;
    int result =sum(n1,n2);// calls the function 
    printf("Sum = %d\n",result);
    return 0;
}