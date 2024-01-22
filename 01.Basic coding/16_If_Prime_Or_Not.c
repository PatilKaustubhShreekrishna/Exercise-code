#include<stdio.h>
// prime number by second method
int main()
{
    int n,i,flag=0;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=2; i<n ; i++)
    {
        if(n%i == 0)
        {
            printf("%d is not a prime number \n", n);
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("%d is prime number\n",n);
    }
    return 0;

}