#include <stdio.h>
int main()
{
    int a,b,i,lcm; // variable decleration
    printf("enter two numbers");
    scanf("%d %d",&a,&b); // input number from the user
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0&&i%b==0)// checks if both have same lcm or not 
        
        {
            lcm=i;// stores value of i in lcm
            break;
        }
    }
    printf("LCM =%d",lcm);// print the desired lcm
    return 0;
}