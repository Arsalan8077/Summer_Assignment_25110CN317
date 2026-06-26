#include<stdio.h>
int main()
{
    int a[2][2]={{1,2},{3,4}};
    int i,sum=0;
    for(i=0;i<2;i++)
    {
        sum=sum+a[i][i];
    }
    printf("sum of diagonal elements is: %d",sum);
    return 0;
}