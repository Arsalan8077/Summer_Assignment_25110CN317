#include<stdio.h>
#include<math.h>
int main()
{
    int high,low,num,orgnum,rem,n=0,result=0; // variable decleration
    printf("enter the lower limit ");
    scanf("%d",&low); // input number from the user
    printf("enter the upper limit");
    scanf("%d",&high);//input number from the user
    printf("Armstrong numbers between %d and %d are:\n",low,high);
    for(num = low;num<=high;num++)
    {  
       orgnum=num;
       n=0;
       result=0;
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
       {
         printf("%d ",num);
       }
    }
     return 0;
}