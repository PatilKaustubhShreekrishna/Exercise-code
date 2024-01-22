#include<stdio.h>
int main()
{
    char str[100];
    int i =0 , num =0;
    printf("Ente string =");
    fgets(str , sizeof(str), stdin);
    while(str[i]!='\n')
    {
        while(str[i]==' ')
        {
            i++;
        }
        while(str[i]!=' ' && str[i]!='\n')
        {
            if(str[i+1]==' ' || str[i+1]=='\n')
            {
                num++;
            }
            i++;
        }

    } 
    printf("number of words =%d",num);
    return 0;   
}