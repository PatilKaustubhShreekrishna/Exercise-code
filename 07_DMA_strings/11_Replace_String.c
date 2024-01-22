#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,size;
    char ch;
    char* str1 =NULL;
    char* str2=NULL;
    size=1;
    str1=(char*)malloc(size* sizeof(int));
    *(str1+0) ='\0';
    puts("\nEnter a string =");
    i=0;
    do{
        scanf("%c",&ch);
        size++;
        str1 =(char*)realloc(str1,size);
        *(str1+i)=ch;
        *(str1+i+1)='\0';
        i++;
    }while(ch != '\n');

    printf("\nInitial String =%s",str1);

    size=1;
    str2= (char*)malloc(size* sizeof(int));
    *(str2 + 0) ='\0';
    puts("\nEnter the Name of Person =");
    i=0;
    do{
        scanf("%c",&ch);
        if(ch != '\n')
        {
        size++;
        str2 =(char*)realloc(str2 ,size);
        *(str2+i) = ch;
        *(str2+i+1)='\0';
        i++;
        }
    }while(ch != '\n');

    i=0;
    j=0;
    while(str1[i] != '\0')
    {
        while(str1[i]!=' ')
            i++;
        while(str1[i]==' ')
            i++;
        while(str2[j]!='\0')
        {
            str1[i]=str2[j];
            i++;
            j++;
        }
        if(str2[j] == '\0')
        {
            while(str1[i]!='\0')
            {
                str1[i]='\0';
                i++;
            }
        }
    }
    printf("\nFinal String =%s" , str1);

    free(str1);
    free(str2);
    str1=NULL;
    str2=NULL;
    return 0;
}