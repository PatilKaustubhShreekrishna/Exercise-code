#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row1,row2,col1,col2 , sum , k;

    int **mat1=NULL , **mat2=NULL , **mat3 = NULL;

    printf("\nMATRIX 1 ---->\n");

    printf("\nEnter matrix 1 row size =");
    scanf("%d",&row1);

    printf("\nEnter matrix 1 column size =");
    scanf("%d",&col1);

    mat1 =(int**)malloc(row1*sizeof(int*));

    for(i=0;i<row1;i++)
    {
        *(mat1+i) = (int*)malloc(col1*sizeof(int));

    }
    printf("\nEnter matrix 1 elements : -\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",*(mat1+i)+j);
        }
    }

    printf("\nMATRIX 2 ---->\n");
    printf("\nEnter matrix 2 row size =");
    scanf("%d",&row2);

    printf("\nEnter matrix 2 column size =");
    scanf("%d",&col2);

    mat2 =(int**)malloc(row2 * sizeof(int*));

    for(i=0;i<row2;i++)
    {
        *(mat2+i) = (int*)malloc(col2 * sizeof(int));
    }

    printf("\nEnter Matrix 2 Elements : -\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",*(mat2+i)+j);
        }
    }

    //mat3 is the resultant matrix of multiply of mat1 and mat2

    mat3 = (int**)malloc(row1*sizeof(int*));

    for(i=0;i<row1;i++)
    {
        *(mat3+i) = (int*)malloc(col2*sizeof(int));
    }

    if(col1 == row2)
    {
        for(i=0;i<row1 ; i++)
        {
            for(j=0;j<col2 ; j++)
            {
                sum = 0;
                for(k=0;k<col1;k++)
                {
                    sum = sum + ( *(*(mat1+i)+k) *  *(*(mat2+k)+j) );

                }
                *(*(mat3+i)+j) = sum;

            }
        }
    }
    else
    {
        printf("\nINVALID CHOICE OF MATRICES\n");
    }

    printf("\nMatrix1  *  Matrix2  :\n\t\t");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\t",*(*(mat3+i)+j));
        }
        printf("\n\t\t");
    }

    free(mat1),free(mat2),free(mat3);

    return 0;
}