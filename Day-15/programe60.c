#include<stdio.h>
int main()
{
    int arr[]={1,2,3,2,4,5,1,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Duplicate elements in the array are: ");
    for(int i=0;i<n;i++)
    {
        int isDuplicate = 0;//check if the element is already printed
        for(int k=0;k<i;k++)
        {
            if(arr[i]==arr[k])
            {
                isDuplicate = 1;
                break;
            }
        }
        if(!isDuplicate)
        {
            for(int j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
                break;
            }
        }
        }
    }
    return 0;
    
}