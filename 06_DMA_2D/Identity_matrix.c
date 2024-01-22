#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,row,col, flag;
    int**mat=NULL;

    printf("\nEnter row size :");
    scanf("%d", &row);

    printf("\nEnter column size :");
    scanf("%d",&col);

    mat = (int**)malloc(row*sizeof(int*));

    for(i=0;i<row;i++)
    {
        *(mat+i) = (int*)malloc(col*sizeof(int));
    }

    printf("\nEnter elements : -\n");
    for(i=0 ;i< row ;i++)
    {
        for(j=0 ;j<col ;j++)
        {
            scanf("%d",*(mat+i)+j);
        }

    }

    for(i=0;i<row;i++)
    {
        flag=0;
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                if(*(*(mat+i)+j) != 1)
                {
                    flag=1;
                    break;
                }
            }
            else{
                if(*(*(mat+i)+j) != 0)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("\nMatrix is IDENTITY matrix");
    }
    else
    {
        printf("\nMatrix is not IDENTITY matrix");
    }

    free(mat);

    return 0;

}