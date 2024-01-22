#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,mid,j,temp;
    int *arr=NULL;

    printf("Enter number of elements to insert=");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("\nEnter elements=");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    printf("\nArray =");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }

    printf("\n");

    mid=n/2;

    if(n%2!=0)
    {
        for(i=0;i<mid-1;i++)
        {
            for(j=i+1;j<mid-1;j++)
            {
                if(*(arr+i)>*(arr+j))
                {
                temp = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                }
            }
        }
        for(i=mid+1;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(*(arr+i)<*(arr+j))
                {
                temp = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                }
            }
        }

    }
    else
    {
        for(i=0;i<mid;i++)
        {
            for(j=i+1;j<mid;j++)
            {
                if(*(arr+i)>*(arr+j))
                {
                temp = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                }
            }
        }
        for(i=mid;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(*(arr+i)<*(arr+j))
                {
                temp = *(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
                }
            }
        }

    }

    printf("\nRESULT =");

    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }

    free(arr);

    arr = NULL ;
    return 0;

}