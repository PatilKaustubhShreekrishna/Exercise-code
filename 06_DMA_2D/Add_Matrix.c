#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row,col;
    int **mat1=NULL,**mat2=NULL;
    printf("\nEnter row size =");
    scanf("%d",&row);

    printf("\nEnter column size=");
    scanf("%d",&col);

    mat1 = (int**)malloc(row*sizeof(int*));
    for(i=0;i<row;i++)
    {
        *(mat1+i)=(int*)malloc(sizeof(int));
    }

    mat2=(int**)malloc(row*sizeof(int*));
    for(i=0;i<row;i++)
    {
        *(mat2+i)=(int*)malloc(row*sizeof(int));
    }

    printf("\nEnter elements in matrix 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
        scanf("%d", *(mat1+i)+j);

        }
    }
    printf("\nEnter elements in matrix 2:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d", *(mat2 + i)+ j);
        }
    }

    printf("\nMatrix 1 : -\n\t\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", *(*(mat1+i)+j) );
        }
        printf("\n\t\t");
    }

    printf("\nMatrix 2 : -\n\t\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", *(*(mat2+i)+j) );
        }
        printf("\n\t\t");
    }

    printf("\nAddition of Matrices : -\n\t\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t", *(*(mat1+i)+j)  +  *(*(mat2+i)+j) );
        }
        printf("\n\t\t");
    }

    return 0;

    
}