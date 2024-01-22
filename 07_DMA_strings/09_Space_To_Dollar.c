#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size,i;
    char ch;

    char* str = NULL ;

    size=1;
    str = (char*)malloc(size* sizeof(int));
    *(str+0) = '\0';

    puts("\nEnter a String =");

    i=0;
    do{
        scanf("%c" , &ch);
        if(ch != '\n')
        {
            size++;
            str= (char*)realloc(str , size);
            *(str+i)=ch;
            *(str+i+1)='\0';
            i++;
        }
    }while(ch!= '\n');

    printf("\nInitial String =%s\n",str);

    i=0;
    while(str[i]!= '\0')
    {
        if(str[i] == ' ')
            str[i] = '$';
        
        i++;
    }
    printf("\nFinal String = %s\n",str);

    free(str);

    str =NULL;

    return 0;

}