#include<stdio.h>

int main()
{ 
    int n;
    int i;
    printf("Enter n =\n");  
    scanf("%d",&n);
    i=1;
    while(i <= n)
    {
        printf("The output value is %d\n",i);
        i++;
    }
    return 0;
}