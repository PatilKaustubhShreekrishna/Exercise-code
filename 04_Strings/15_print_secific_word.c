#include<stdio.h>

//DESCRIPTION : -
//C programwhich accept sentence from user and position from user 
//and print the word at that position.

int main()
{
    char str[100];
    int i=0,inp,j, spac;
    printf("enter a string =");
    fgets(str , sizeof(str), stdin);
    printf("Enter a position =");
    scanf("%d",&inp);
    spac =0;
    while(str[i]!='\n')
    {
        if(spac == inp-1)
        {
            j = i;
            break;
        }
        if(str[i]== ' ')
        {
            spac++;
        }
        i++;
    }
    while(str[j]!=' ')
    {
        printf("%c",str[j]);
        j++;
    }
    return 0;
       
}
