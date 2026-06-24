#include<stdio.h>
int main ()
{
    int arr[100],n,i;
    int secondlargest,largest;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest=secondlargest=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]>secondlargest && arr[i]!=largest)
        {
            secondlargest=arr[i];
        }
    }
    printf("second largest element is %d",secondlargest);
    return 0;
}