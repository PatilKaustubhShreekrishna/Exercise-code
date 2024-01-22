#include<stdio.h>
int main()
{
    int n, i, j,count;
    int arr[100];
    int brr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n ;i++)
    {
        count = 0;
        for(j=0 ; j<n ; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
            if(count==2)
            {
                break;
            }
        }
        if(count==1)
        {
            printf("%d is unique element\n",arr[i]);
        }
        
    }
    return 0;

}