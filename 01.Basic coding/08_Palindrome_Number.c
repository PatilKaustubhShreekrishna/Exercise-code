#include<stdio.h>
int main()
{
    int n,rev ,rem, org;
    printf("Enter the number=");
    scanf("%d",&n);
    org = n;
    rev = 0 ;
    while(n>0)
    {
        rem = n % 10;
        rev = rev*10 + rem;
        n = n / 10;

    }
    printf("%d ", rev);
    if(org == rev)
    {
        printf("Palindrome is present");
    }
    return 0;


}