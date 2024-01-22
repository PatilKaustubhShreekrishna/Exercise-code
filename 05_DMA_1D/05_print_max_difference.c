#include<stdio.h>
#include<stdlib.h>

//Write a C program to create an array of n elements using static
//memory allocation to Find 2 Elements in the Array such that
//difference between them is Largest.

int main()
{
    int n,i,j,temp;
    int* arr=NULL;

    printf("\nEnter number of elements to insert =");
    scanf("%d" , &n);

    arr = (int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nEnter elements =");
        scanf("%d", arr+i);

    }

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)>*(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;

            }
        }
    }

    printf("\nThe elements with highest Difference are =%d and %d",*(arr),*(arr+n-1));

    printf("\nMAX Difference =%d" , *(arr+n-1) - *(arr));

    free(arr);


    return 0;
}