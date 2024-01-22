#include<stdio.h>
int main()
{
    int n,i;
    int arr[100];
    printf("Enter number=");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array elements =");
        scanf("%d", &arr[i]);
    }
    for(i=0 ; i<n;  i++)
    {
        printf("%d ", arr[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]%7==0 && arr[i]%5 != 0)
        {
            printf("\n%d is NOT Divisible by 5 AND DIVISIBLE by 7",arr[i]);
        }
    }
    return 0;

}