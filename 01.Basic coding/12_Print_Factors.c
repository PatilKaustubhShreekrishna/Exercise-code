#include<stdio.h>
int main()
{
    int i,n,org;
    printf("Enter number =");
    scanf("%d",&n);
    org=n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d is factor of %d\n",i,org);
        }
    }
    return 0;
}