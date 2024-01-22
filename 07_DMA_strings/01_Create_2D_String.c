#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,size,row,col,k;
    char*** str=NULL;
    char ch ,ya;

    /*printf("\nEnter row :");
    scanf("%d",&row);

    printf("\nEnter column :");
    scanf("%d" ,&col);*/

    printf("\nEnter row and column :");

    scanf("%d %d" ,&row , &col);

    scanf("%c",&ya);

    str =(char***)malloc(row*sizeof(char**));

    for(i=0 ; i<row ; i++)
    {
        *(str+i) =(char**)malloc(col*sizeof(char*)); 
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            k=0;
            size=1;
            *(*(str+i)+j) =(char*)malloc(sizeof(char));

            *(*(*(str+i)+j)) = '\0';

            if(ch == '\n'){
                ch='\0';
            }

            printf("\nEnter string =");

            do{
                scanf("%c", &ch);

                if(ch!='\n')
                {
                    size++;
                    *(*(str+i)+j) = (char*)realloc(*(*(str+i)+j) , size);

                    *(*(*(str+i)+j) + k) = ch;
                    *(*(*(str+i)+j) + k +1) = '\0';

                    k++;


                }
                
            }while(ch!='\n');

            

        }
    }

    printf("\nRESULT  :-\n");
    for(i=0 ; i<row ; i++)
    {
        for(j=0;j<col ;j++)
        {
            printf("%s\t", *(*(str+i)+j));
        }
        printf("\n");
    }


    free(str);

    return 0;

}