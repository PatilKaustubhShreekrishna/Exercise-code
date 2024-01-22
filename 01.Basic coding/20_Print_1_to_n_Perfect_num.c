#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(j=1 ; j<=n ; j++ )
    {
        sum = 0;
        for(i=1; i<=j/2 ; i++)
        {
            
            if(j%i == 0)
            {
                sum =sum+i;   
            }
        }
        if(sum == j)
        {
            printf("%d is PERFECT number\n",j);
        }


    }
    return 0;
}