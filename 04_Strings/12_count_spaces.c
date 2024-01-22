#include<stdio.h>
int main()
{
    char str[100];
    int i=0,numsp=0;
    printf("ENTER THE STRING =");
    fgets(str, sizeof(str),stdin);
    while(str[i]!='\n'){
        if(str[i]==' ')
        {
        numsp++;

        }
        i++;
    }
    printf("number of space =%d",numsp);
    

    

    return 0 ;
}