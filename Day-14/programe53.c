#include<stdio.h>
int main ()
{
    int arr[100],n,key,i,found=0;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to search");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            found=1;
            printf("element found at position %d",i+1);
            break;
        }
    }
    if(found==0)
    {
        printf("element not found");
    }
    return 0;
}