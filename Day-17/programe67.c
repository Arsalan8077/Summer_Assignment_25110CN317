#include<stdio.h>
int main()
{
    int a []={1,2,3,4};
    int b[]={3,4,5,6};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    printf("intersection of arrays : ");
    for (int i=0;i<n1;i++)
    {
        for (int j=0;j<n2;j++)
        {
            if (a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}
    