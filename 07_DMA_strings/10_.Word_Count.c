#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int i,size,count;
    char ch;
    char* str= NULL;

    size =1;
    str = (char*)malloc(size * sizeof(char));

    *(str+0) = '\0';

    puts("\nEnter A string =");
    i=0;
    do{
        scanf("%c",&ch);
        if(ch != '\n')
        {
            size++;
            str =(char*)realloc(str,size);
            *(str+i)=ch;
            *(str+i+1)='\0';
            i++;
        }
    }while(ch!='\n');

    count=0;
    i=0;

    while(str[i] != '\0')
    {
        if(str[i+1]==' ' || str[i+1]=='\0')
        {
            count++;
        }
        i++;
    }

    printf("\nNumber Of Words =%d\n",count);

    free(str);

    str = NULL;

    return 0;
}