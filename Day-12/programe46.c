#include<stdio.h>
int armstrong(int num)//function to check Armstrong number
{
    int temp, sum=0,rem;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if (sum==temp)
    return 1;//armstrong number
    else
    return 0;//not Armstrong number
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(armstrong(num))
    printf("Armstrong number");
    else
    printf("not Armstrong number");
    return 0;
}
        