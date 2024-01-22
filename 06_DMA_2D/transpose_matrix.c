#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,j,row , col;
    int**mat=NULL,**trans=NULL;

    printf("\nMATRIX --->\n");
    
    printf("\nEnter row size=");
    scanf("%d",&row);

    printf("\nEnter Column size =");
    scanf("%d",&col);

    mat = (int**)malloc(row*sizeof(int*));
    trans=(int**)malloc(col*sizeof(int*));

    for(i=0;i<row;i++)
    {
        *(mat+i) = (int*)malloc(col*sizeof(int));
    }

    for(i=0;i<col;i++)
    {
        *(trans+i) = (int*)malloc(row*sizeof(int));

    }
    printf("\nEnter elements : -\n");
    for(i=0 ;i<row ;i++)
    {
        for(j=0 ;j<col ;j++)
        {
            scanf("%d",*(mat+i)+j);

        }
    }

    printf("\nMATRIX : -\n\t\t");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(*(mat+i)+j));

        }
        printf("\n\t\t");
    }

    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            *(*(trans+i)+j) = *(*(mat+j) + i);  //that is, trans[i][j] = mat[j][i]
        }
    }

    printf("\nTRANSPOSE MATRIX : -\n\t\t");
    for(i=0;i<col;i++)
    {
        for(j=0;j<row;j++)
        {
            printf("%d\t", *(*(trans+i)+j));
        }
        printf("\n\t\t");
    }

    return 0;

}