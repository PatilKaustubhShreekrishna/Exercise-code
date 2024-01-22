#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,row,col, flag;

    int** mat=NULL;

    printf("\nEnter row size =");
    scanf("%d",&row);

    printf("\nEnter column size =");
    scanf("%d",&col);

    mat = (int**)malloc(row*sizeof(int*));

    printf("\nEnter Elements : -\n");
    for(i=0 ; i< row ; i++)
    {
        *(mat+i) = (int*)malloc(col*sizeof(int));
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",*(mat+i)+j);
        }
    }

    for(i=0;i<row;i++)
    {
        flag=0;

        for(j=0;j<col;j++)
        {
            if( *(*(mat+i)+j)  !=  *(*(mat+j)+i))
            {
                flag=1;
                break;
            }
        }
        if(flag == 1)
        {
            break;
        }

    }

    if(flag == 0)
    {
        printf("\n__Matrix is symmetric__\n");
    }
    else{
        printf("\n__Matrix is not Symmetric__\n");
    }

    free(mat);

    return 0;

}