#include<stdio.h>
int main()
{
    int n,i,a,j,sum,min,p,q;
    int arr[100];
    printf("Enter Array size = ");
    scanf("%d",&n);
   
    for( i =0 ;i<n ; i++)
    {
        printf("Enter array elements=");
        scanf("%d",&arr[i]);
    }
    printf("Enter Given number ");
    scanf("%d",&a);
    min=__INT_MAX__;
    for(i=0 ; i<n ; i++)
    {
        for(j=0 ; j<n ; j++)
        {
            if(i!=j)
            {
            sum=arr[i] + arr[j]-a;
            
                if(sum<0)
                {
                    sum=-sum;
                }
            if(sum<min)
            {
                min=sum;
                p=i;
                q=j;
            }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nClosest sum =%d and %d",arr[p],arr[q]);
    return 0;       
}