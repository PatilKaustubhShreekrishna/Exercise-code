
#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter number\n");
    scanf("%d",&n);
    for(j=1 ; j<=n ; j++)
    {
        for(i=1 ; i<=n-j+1 ; i++)
        {
            printf("%d ",n-j+1);  
        }
        printf("\n");

    }
    return 0;

}