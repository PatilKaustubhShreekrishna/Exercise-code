#include<stdio.h>

// C program to accept string with multiple spaces from user
// and print it witha single space as a delimiter

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
        while(str[i]!=' ')
        {
            printf("%c", str[i]);
            if(str[i+1]==' '  || str[i]=='\n')
            {
                if(str[i]=='\n')
                {
                    break;
                }
                printf(" ");
                
            }
            i++;

        }
        
        
        
    }

    return 0;
}