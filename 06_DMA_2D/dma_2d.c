#include<stdio.h>
#include<stdlib.h>
int main()
{
    int** ptr=NULL;
    int n,i,j,row,col;

    printf("\nEnter number of rows=");
    scanf("%d",&row);

    ptr = (int**)malloc(row*sizeof(int*));

    

    printf("\nEnter number of columns =");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        *(ptr+i)=(int*)malloc(col*sizeof(int));
    }

    printf("\nEnter Elements :\n");
    
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",*(ptr+i)+j);

        }
    }

    printf("\nMATRIX : -\n");
    printf("\t\t\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", *(*(ptr+i)+j) );
        }
        printf("\n\t\t\t");
    }

    return 0;
}