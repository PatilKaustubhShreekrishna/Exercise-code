#include<stdio.h>
int main()
{
    char str[100];
    int i,j,n;
    printf("Enter a string =");
    fgets(str ,sizeof(str) , stdin);
    printf("Enter number of characters to be reversed =");
    scanf("%d" , &n);
    i=0;
    while(str[n-1]>0)
    {
        printf("%c" , str[n-1]);
        n--;
        i++;
    }
    while(str[i]!='\n')
    {
        printf("%c" , str[i]);
        i++;
    }

    return 0;
}