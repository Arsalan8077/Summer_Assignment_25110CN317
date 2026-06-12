#include<stdio.h>
int maximum (int a, int b) // function to find sum
{
    if(a>b)// checks the which num ber is maximum
    return a;
    else
    return b;
}
int main ()
{
    int n1=10 , n2=20;
    int result = maximum(n1,n2);// calls the function 
    printf("maximum = %d\n",result);
    return 0;
}