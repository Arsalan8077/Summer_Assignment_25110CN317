   #include<stdio.h>
int main()
{
    int a[100],i,n;
    int largest,smallest;//variable declaration
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);//input size of array
    printf("Enter the elements of the array: ");//input elements of array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=a[0];
    smallest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
    }
    printf("The largest element in the array is: %d\n",largest);
    printf("The smallest element in the array is: %d\n",smallest);
    return 0;
}               