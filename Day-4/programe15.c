#include<stdio.h>
#include<math.h>
int main()
{
    int num,orgnum,rem,n=0,result=0; // variable decleration
    printf("enter the number ");
    scanf("%d",&num); // input number from the user
    orgnum=num;
    while(orgnum!=0)// count number of digits 
    {
        orgnum/=10;
        n++;
    }
    orgnum=num;
    while(orgnum!=0)// calculate sum of power of digits
    {
        rem=orgnum % 10;
        result+=pow(rem,n);
        orgnum/=10;
    }
    if (result==num)// check armstrong number 
     printf("%d is an armstrong number .",num);
    else 
     printf("%d is not an armstrong number .",num);
     return 0;
}