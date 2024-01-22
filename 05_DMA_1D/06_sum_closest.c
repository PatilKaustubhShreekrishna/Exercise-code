#include<stdio.h>
#include<stdlib.h>
//Write a C program to create an array of n elements using static
//memory allocation to Find the two Elements such that their Sum is
//Closest to given number

int main()
{
    int n,i,j,temp,low,p,q,sum,diff;
    int* arr=NULL, *num=NULL;

    printf("\nEnter number of elements to insert=");
    scanf("%d",&n);

    arr =(int*)malloc(n*sizeof(int));
    num=(int*)malloc(sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nEnter elements =");
        scanf("%d",arr+i);
    }

    printf("\nArray =");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(arr+i));
    }


    printf("\nEnter the number =");
    scanf("%d",num);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j) = temp;

            }
        }
    }

    printf("\nSorted Array -\n");
    for(i=0;i<n;i++)
    {
        printf("%d  ",*(arr+i));
    }

    low=__INT_MAX__;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum= *(arr+i) + *(arr+j);
            diff=sum - *num ;
            if(diff<0)
            {
                diff= -diff;
            }
            if(diff < low)
            {
                low = diff;
                p=i;
                q=j;

            }
        }
    }

    printf("\nThe Elements whose sum is Closest to %d are = %d and %d",*num, *(arr+p), *(arr+q));

    free(arr);
    free(num);


    return 0;
}