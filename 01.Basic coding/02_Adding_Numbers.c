#include<stdio.h>
int main()
{
    int n;
    int i;
    int ans=0;
    printf("Enter n= ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans = ans+i;
    }
    printf("Addition from 1 to %d = %d", n,ans);
    return 0;
}