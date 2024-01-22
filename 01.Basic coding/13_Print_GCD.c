#include<stdio.h>
int main()
{
    int n1,n2,gcd,i;
    printf("Enter first number =");
    scanf("%d",&n1);
    printf("Enter the second number =");
    scanf("%d",&n2);
    for(i=1;i<=n1 && i<=n2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd = i;
        }
    }
    printf("%d is the GCD of %d and %d",gcd,n1,n2);
    return 0;

}