#include<stdio.h>
int main()
{
    char str[100];
    int i= 0 , count = 0;
    printf("Enter a string =");
    fgets(str , sizeof(str) , stdin);
    while(str[i]!='\n')
    {
        count++;
        i++;
    }
    printf("%d", count);
    return 0;

}