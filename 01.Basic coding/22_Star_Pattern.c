#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter number\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {for(i=1;i<=n;i++)
    {
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}