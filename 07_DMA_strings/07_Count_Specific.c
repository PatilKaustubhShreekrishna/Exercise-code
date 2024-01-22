#include<stdio.h>
#include<stdlib.h>
int main()
{
    char* str=NULL;
    int i=0 , size =1,num_vow=0 , num_cons=0;
    char ch;

    str = (char*)malloc(sizeof(char));

    *(str+0) ='\0';

    printf("\nEnter string =");
    do{
        scanf("%c", &ch);
        if(ch!='\n')
        {
            size++;
            str= (char*)realloc(str , size*sizeof(char));
            *(str+i) =ch;
            *(str+i+1)='\0';
            i++;
        }
    }while(ch!='\n');

    printf("\nInitial string :-%s",str);
    i=0;

    while(*(str+i)!='\0')
    {
        while(*(str+i)==' ')
        {
            i++;
        }
        if(*(str+i)=='A'|| *(str+i)=='E' || *(str+i)=='I' || *(str+i)=='O' || *(str+i)=='U' || *(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u')
        {
            num_vow++;
        }
        else
        {
            num_cons++;
        }

        i++;
    }
    printf("\nNumber of Vowels : - %d", num_vow);
    printf("\nNumber of consonants : - %d", num_cons);
    free(str);
    return 0;
}