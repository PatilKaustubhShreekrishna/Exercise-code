#include<stdio.h>
int main()
{
    int base , exp, i,ans;
    printf("Enter base = ");
    scanf("%d",&base);
    printf("Enter a power = ");
    scanf("%d",&exp);
    ans =1;
    for(i=1;i<=exp;i++)
    {
        ans= ans * base;

    }
    printf("Answer is %d", ans);
}