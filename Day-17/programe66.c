#include<stdio.h>
int main()
{
    int a []={1,2,3,4};
    int b[]={3,4,5,6};
    int n1=sizeof(a)/sizeof(a[0]);
    int n2=sizeof(b)/sizeof(b[0]);
    int c[20],k=0;//copy first array
    for (int i=0;i<n1;i++)
    {
        c[k++]=a[i];// add only unique elements from first array
    }
    for (int i=0;i<n2;i++)
    {
        int found =0;
        for (int j=0;j<k;j++)
        {
            if (b[i]==c[j])
            {
                found=1;
                break;
            }
        }
        if (!found)
        {
            c[k++]=b[i];
        }
    }
    printf(" union of arrays : ");
    for (int i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}