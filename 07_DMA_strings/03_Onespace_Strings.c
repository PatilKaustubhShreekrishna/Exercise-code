#include<stdio.h>
#include<stdlib.h>

// Multiple Spaces To One space string:
int main()
{
    char* str=NULL;
    int size=1 ,i=0;
    char ch;

    str=(char*)malloc(sizeof(str));

    printf("\nEnter a string =");
    do{
        scanf("%c",&ch);

        if(ch!='\n')
        {
            size++;
            str=(char*)realloc(str,size*sizeof(str));
            *(str+i)=ch;
            *(str+i+1)='\0';
            i++;

        }
    }while(ch!='\n');

    printf("\nOriginal String : -\n%s",str);
    printf("\nResultant String : -\n");

    i=0;
    while(*(str+i)  != '\0')
    {
            while(*(str+i)==' ')
            {
                i++;
            }
            while(*(str+i)!=' ' && *(str+i) !='\0')
            {
                printf("%c",*(str+i));
                if(*(str+i+1) ==' ')
                {
                    printf(" ");
                }
                i++;
            }
    }

    free(str);

    return 0;
}