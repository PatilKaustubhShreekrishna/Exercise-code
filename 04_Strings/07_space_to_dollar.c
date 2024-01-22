#include<stdio.h>
int main()
{
    char str[100];
    int i=0;
    printf("Enter a string=");
    fgets(str , sizeof(str) , stdin);
    while(str[i] != '\n')
    {
        while(str[i]==' ')
        {
            str[i]='$';
            i++;
        }
        i++;
    }
    printf("%s", str);
    return 0 ;
}