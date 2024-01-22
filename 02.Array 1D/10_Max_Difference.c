#include<stdio.h>
int main()
{
    int n,i,max,min;
    int arr[100];
    printf("Enter array size = ");
    scanf("%d",&n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array elements=");
        scanf("%d", &arr[i]);
    }
    max=-__INT_MAX__;
    min=__INT_MAX__;
    for(i=0 ; i<n ;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("%d and %d have largest difference ",max,min);
    return 0;
}

