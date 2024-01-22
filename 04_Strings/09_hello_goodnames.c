#include<stdio.h>
int main()
{
    char str[100], inp[100];
    int i =0, j=0;
    printf("Enter  string =");
    fgets(str , sizeof(str) , stdin);
    printf("\n Enter input =");
    fgets(inp , sizeof(inp) , stdin);
    while(str[i] != '\n')
    {
        while(str[i]!=' ')
        {
            i++;
        }
        while(str[i]==' ')
        {
            i++;
        }
        //Some Changes Done to Increase Efficiency -->
        while(inp[j]!='\n')
        {
            str[i]=inp[j];
            i++;
            j++;
        }
        if(inp[j]=='\n')
        {
            str[i]='\n';
        }

    }
    printf("\nstring = %s" , str);
    return 0;
    
}