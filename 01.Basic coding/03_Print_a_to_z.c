#include<stdio.h>

int main()
{
    char ch;
    ch='a';
    while(ch<= 'z')
    {
        printf("\n\nAlphabet =%c",ch);
        ch++;
    }
    int n;
    n=97;
    while(n<=122)
    {
        printf("\n\nAlphabet by int =%c",n);
        n++;
    }

    return 0;
}