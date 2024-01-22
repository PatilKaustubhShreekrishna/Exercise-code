#include<stdio.h>
int main()
{
    int n, i, j,temp1,temp2,count,rem,ans,sum;
    int arr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        temp1=arr[i];
        count=0;
        while(temp1 !=0)
        {
            count++;
            temp1=temp1/10;

        }
        temp2=arr[i];
        sum=0;
        while(temp2 != 0)
        {
            ans=1;
            rem=temp2%10;
            for(j=0 ; j<count ; j++)
            {
                ans=ans*rem;

            }
            sum= sum+ ans;
            temp2=temp2/10;
        }
        if(arr[i]==sum)
        {
            printf("%d is Armstrong number\n",arr[i]);
        }


    }
    return 0;
    
}