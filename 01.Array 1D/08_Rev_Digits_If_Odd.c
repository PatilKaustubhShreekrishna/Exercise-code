#include<stdio.h>
int main()
{
    int n,i,temp,rem,rev;
    int arr[100];
    printf("Enter array size=");
    scanf("%d",&n);
    for(i=0 ; i<n ;i++)
    {
        printf("Enter array elements=");
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);

    }
    for(i=0 ; i<n ; i++)
    {
        if(arr[i]%2!=0)
        {
            temp = arr[i];
            rev=0;
            while(temp!=0)
            {
                rem=temp%10;
                rev=rev*10 +rem;
                temp=temp/10;
            }
            arr[i]=rev;

        }
        


    }
    printf("\n");
    for(i=0 ; i<n ;i++)
    {
        printf("%d ",arr[i]);

    }
    return 0;


}