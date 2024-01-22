#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* str=NULL;
    int size=1 , i=0;
    char ch;

    str=(char*)malloc(sizeof(char));
    *(str+0)='\0';

    printf("\nEnter string =");
    do{
        scanf("%c",&ch);

        if(ch!='\n')
        {
            size++;
            str = (char*)realloc(str, size*sizeof(char));

            *(str+i)=ch;
            *(str+i+1)='\0';

            i++;

        }
    }while(ch != '\n');

    printf("\nInitial string :-%s",str);
    printf("\nReverse string :-");


    while(i !=-1)
    {
        printf("%c",*(str+i));
        i--;
    }

    free(str);

    str = NULL;

    return 0;
}