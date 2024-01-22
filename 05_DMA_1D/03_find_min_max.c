#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,temp;
    int* arr=NULL;

    printf("\nEnter Number of elements to insert=");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    for(i=0;i<n;i++)
    {
        printf("\nEnter elements =");

        scanf("%d",arr+i);
    }

    printf("\n");

    printf("Array=");
    for(i=0;i<n;i++)
    {
        printf("%d\tn",*(arr+i));
    }


    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+j)> *(arr+i))
            {
            temp=*(arr+i);
            *(arr+i)=*(arr+j);
            *(arr+j)=temp;
            }

        }
    }

    printf("\nMaximum Element =%d\nMinimum Element =%d\n",*(arr) , *(arr+n-1));

    free(arr);


    return 0;



}