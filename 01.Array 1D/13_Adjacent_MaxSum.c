#include<stdio.h>
int main()
{
    int n,i,high,sum=0,p,q;
    int ar[100];
    printf("Enter size of array=");
    scanf("%d",&n);
    printf("Enter element =");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&ar[i]);
    }
    high = -__INT_MAX__;
    for(i=0 ; i<n ; i++)
    {
        sum=ar[i]+ar[i+1];
        if(sum>high)
        {
            high= sum;
            p=i;
            q=i+1;
        }

    }
    printf("\nTwo subsequent terms whose sum is max=%d and %d", ar[p],ar[q]);
    printf("\nSum max = %d",high);
    return 0;
    

}