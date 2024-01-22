#include<stdio.h>
int main()
{
    char str[100];
    int i = 0;
    printf("Enter a string =");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\n')
    {
        while(str[i]==' ')
        {
            i++;
        }
        while(str[i]!=' ' && str[i]!='\n')
        {
            printf("%c", str[i]);
            if(str[i+1]==' ' && str[i+1]!='\n')
            {
                printf(" ");

            }
            i++;
        }

    }

    return 0;
}