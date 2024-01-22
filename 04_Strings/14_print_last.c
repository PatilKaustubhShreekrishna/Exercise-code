#include<stdio.h>
int main()
{
    char str[100];
    int i=0, j;
    printf("enter a string =");
    fgets(str , sizeof(str) , stdin);
    while(str[i] != '\n')
    {
        while(str[i]!='\n')
        {
            i++;
        }
        while(str[i]!=' ')
        {
            i--;
        }   
        while(str[i]!='\n')
        {
            printf("%c",str[i]);
            i++;
        }

    }
    return 0;
}