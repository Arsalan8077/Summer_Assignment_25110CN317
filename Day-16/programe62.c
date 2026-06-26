#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,2,3,2,5,3,3};
    int maxfreq=0,maxelement;

    for(int i=0;i<10;i++)
    {
        int count=0;
        for(int j=0;j<10;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            maxelement=arr[i];
        }
    }
    printf("The element with the highest frequency is %d and it appears %d times.\n", maxelement, maxfreq);
    return 0;
}