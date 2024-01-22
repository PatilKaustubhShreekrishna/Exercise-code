#include<stdio.h>

// C program to print all Fibonacci series up to 
//each ASCII code of alphabets in given string.

int main()
{
    char str[100];
    int i, sum , h ,l , m,n;
    printf("Enter string Alphabet = ");
    fgets(str , sizeof(str) , stdin);
    i = 0;
    printf("\nThe Fibonacci Series ---->\n");
    while(str[i]!= '\n')
    {
        printf("\n");
        printf("\nFibonaci Series upto %d = ", str[i]);
        h = str[i];
        m=0;
        n=1;
        printf("%d  %d  ",m,n);
        sum = m+n;
        while(sum < h) 
        {   printf("%d  ",sum);
            sum = m + n ;
            m=n;
            n=sum;
        }  
        printf("\n");
        i++;

    }
    return 0 ;

}