#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i=0 , size=1 , j, k , temp;
    char* str =NULL ;
    char ch;

    str = (char*)malloc(size* sizeof(char));

    *(str+0) = '\0';

    printf("\nEnter A string =");
    do{
        scanf("%c" , &ch);
        if(ch!= '\n')
        {
            size++;
            str = (char*)realloc(str , size);

            *(str+i)=ch;
            *(str+i+1)='\0';
            i++;
        }
    }while(ch != '\n');

    printf("\nInitial String --> %s\n" , str);

    i=0;
    while(str[i] != '\0')
    {
        while(str[i] == ' ')
        {
            i++;
            
        }
        while(str[i] != ' ' && str[i] !='\0')
        {
            j = i;
            while(str[i+1] != ' ' && str[i+1] != '\0')
            {
                i++;
            }
            k = i;
            while(j<=k)
            {
                temp = str[k];
                str[k] = str[j];
                str[j] = temp ;

                j++ ;
                k--; 
            }
            i++;   
        }
        
    }

    printf("\nFinal String = %s" , str);
    
    free(str);

    str=NULL;

    return 0;

}