#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* str =NULL;
    int i=0 , size =1;
    char ch;

    str =(char*)malloc(sizeof(char));

    *(str+0)='\0';

    printf("\nEnter a string =");

    do{
        scanf("%c",&ch);

        if(ch!='\n')
        {
            size++;
            str=(char*)realloc(str, size*sizeof(char));
            *(str+i)=ch;
            *(str+i+1)='\0';
            i++;
        }

    }while(ch!='\n');

    printf("\nInitial String : -%s",str);
    printf("\nNumber of characters in String : - %d" , i);

    free(str);
    return 0;
}