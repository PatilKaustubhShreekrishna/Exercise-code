#include<stdio.h>
//C program to print all prime numbers between 1 to n
int main()
{
    int n,i,j,count;
    printf("Enter number\n");
    scanf("%d",&n);
    for(i=1; i<=n ; i++)
    {
        count=0;
        for(j=1 ; j<=n ; j++)
        {
            if(i%j == 0)
            {
                count++;
            }
        }
        if(count == 2)
        {
            printf("%d is prime \n",i);
        }
    }

    return 0;
}