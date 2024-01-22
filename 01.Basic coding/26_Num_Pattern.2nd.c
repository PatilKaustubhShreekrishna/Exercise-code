#include<stdio.h>
int main()
{
    int n,i,j,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum =0;
    for(j=1;j<=n;j++)
    {
        for(i=1;i<=j;i++)
        {
            sum = sum +1;
            printf("%d ",sum);

        }
        printf("\n");
    }
    return 0;
}