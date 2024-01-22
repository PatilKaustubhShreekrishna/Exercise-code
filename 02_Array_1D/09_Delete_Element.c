#include<stdio.h>
int main()
{
    int n,i,ind;
    int arr[100];
    printf("Enter array size=");
    scanf("%d",&n);
    for(i=0 ; i<n ;i++)
    {
        printf("Enter array elements =");
        scanf("%d",&arr[i]);

    }
    printf("Enter index of an array to be deleted =");
    scanf("%d",&ind);
    for(i=0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=ind ; i<n ; i++)
    {
        arr[i]=arr[i+1];

    }
    printf("\n");
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]==0)
        {
            continue;
        }
        else{
        printf("%d ",arr[i]);
        }
    }
    return 0;


}