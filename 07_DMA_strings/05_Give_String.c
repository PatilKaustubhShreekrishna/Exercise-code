#include<stdio.h>
#include<stdlib.h>
//.Write a C program to accept string with multiple spaces 
//from user and print as it is.
int main()
{
    char *str=NULL;
    int size=1 , i=0;
    char ch;

    str=(char*)malloc(sizeof(char));

    printf("\nEnter a string =");

    do{
        scanf("%c",&ch);

        if(ch!='\n')
        {
            size++;
            str=(char*)realloc(str, size*sizeof(str));

            *(str+i)=ch;
            *(str+i+1) = '\0';
            i++;

        }
    }while(ch!='\n');

    printf("\n%s",str);

    free(str);

    return 0;

}