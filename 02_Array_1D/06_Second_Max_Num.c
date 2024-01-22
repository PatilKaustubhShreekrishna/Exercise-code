#include<stdio.h>
int main()
{
    int n, i, j,temp,max,smax;
    int arr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);

    }
    smax= -9999;

    max= smax+1;
    for( i =0 ;i<n;i++)
    {
        if(arr[i]>max && arr[i]> smax )
        {
            smax=max;

            max=arr[i];
        }
        if(arr[i]<max && arr[i]>smax)
        {
            smax = arr[i];
        }
    }
    for(i=0 ; i<n;  i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d is the second maximum number",smax);

    return 0;

}