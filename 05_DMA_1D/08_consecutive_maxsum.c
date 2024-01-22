#include<stdio.h>
#include<stdlib.h>
//Write a C program to create an array of n elements using static
//memory allocation to find 2 subsequent elements whose sum is
//maximum.

int main()
{
    int n,i,j,p,q;
    int *arr=NULL,*max=NULL ,*sum=NULL;

    printf("\nEnter size of an array =");
    scanf("%d", &n);

    arr= (int*)malloc(n*sizeof(int));

    max =(int*)malloc(sizeof(int));

    sum =(int*)malloc(sizeof(int));

    printf("\nEnter elements : -");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    printf("\nArray : - ");
    for(i=0;i<n;i++)
    {
        printf("%d  ", *(arr+i));
    }

    *max = -__INT_MAX__;

    i=0;
    j=1;
    while(j<n)
    {
        *sum= *(arr+i) +  *(arr+j) ;
        if(*(sum) >  *max)
        {
            *max = *sum;
            p=i;
            q=j;
        }
        i++;
        j++;

    }

    printf("\n 2 subsequent elements whose sum is maximum = %d and %d\n MAX SUM = %d", *(arr+p) ,*(arr+q) ,*max);

    free(arr);
    free(max);
    free(sum);

    return 0;
    

}