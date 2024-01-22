#include<stdio.h>
int main()
{
    int n,i,mul,j;
    printf("Enter the number =");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d",i*j);
            printf("\t");
        }
        printf("\t\n");
    }
    return 0;
}