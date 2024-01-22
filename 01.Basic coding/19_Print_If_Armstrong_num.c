//C PROGRAM TO CHECK WHETHER A NUMBER IS ARMSTRONG NUMBER OR NOT
#include<stdio.h>
int main()
{
    int n,temp,count=0,ans,i, rem,sum=0;
    printf("Enter thr number\n");
    scanf("%d",&n);
    temp=n;
    while(temp>0)
    {
        temp = temp / 10;
        count++;
    }
    temp = n;
    while(temp>0)
    {
        ans=1;
        rem = temp % 10;
        for(i=1;i<=count;i++)
        {
            ans = ans * rem ;           
        }
        sum = sum + ans;
        temp = temp / 10;
    }
    if(n == sum)
    {
        printf("%d is Armstrong number\n",n);
    }
    else{
        printf("%d is not an armstrong number\n",n);
    }
    return 0;

}