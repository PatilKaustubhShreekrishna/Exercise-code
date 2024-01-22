#include<stdio.h>
int main()
{
    int n, i, j,temp,m;
    int arr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);
    }
    printf("\nEnter number to be inserted=");
    scanf("%d",&m);
    for(i=0 ; i<n ;i++)
    {
        for(j=i+1 ; j<n ; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=n-1 ; i>=0; i--)
    {
        if(arr[i]>m)
        {
            arr[i+1]=arr[i];
        }
        else
        {
            arr[i]=m;
            break;
        }
    }
    for(i=0 ; i<n;  i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
    
}