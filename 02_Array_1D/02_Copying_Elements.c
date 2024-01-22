#include<stdio.h>
int main()
{
    int n, i;
    int arr[100];
    int brr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        brr[i]=arr[i];
    }
    for(i=0; i<n ; i++)
    {
        printf("\narr elements= ");
        printf("%d ",arr[i]);
        printf("\nbrr elements= ");
        printf("%d ",brr[i]);
    }
    return 0;
}