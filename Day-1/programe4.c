#include <stdio.h>
int main()
{
    int num,count=0; // initialisation of variables 
    printf("enter the number ");
    scanf("%d",&num); // input the number from the user
    if(num==0) // checks if number is equal to zero or 
    {
        count=1;
    }
    else       
           while(num!=0)    //  checks the number is not equal to zero 
    {
        num/=10; // removes last digit from the number
        count++; // count the number of digits
    }
    printf("number of digits are =%d",count);
    return 0;
}


