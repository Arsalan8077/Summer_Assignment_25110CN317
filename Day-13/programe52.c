#include<stdio.h>
int main()
{
    int a[100],i,n,sum=0;
    int even=0,odd=0;//variable declaration
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);//input size of array
    printf("Enter the elements of the array: ");//input elements of array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("The number of even elements is: %d\n",even);
    printf("The number of odd elements is: %d\n",odd);
    return 0;
}               