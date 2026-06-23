#include<stdio.h>
int perfect(int num)//function to check perfect number
{
    int i,sum=0;
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        sum=sum+i;
    }
    if (sum==num)
    return 1;//perfect number
    else
    return 0;//not perfect number
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    if(perfect(num))
    printf("%d is a Perfect number",num);
    else
    printf(" %d is not a Perfect number", num);
    return 0;
}
        