#include<stdio.h>
int main()
{
    int a[]={5,3,8,4,2};
    int i,n=5,j,t,min;
    for (i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
            if(a[j]<a[min])
                min=j;
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }
    for (i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;   
}