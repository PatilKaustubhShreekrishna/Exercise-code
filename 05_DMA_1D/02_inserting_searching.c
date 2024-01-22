#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j,temp,high , low, mid, flag=0;
    int* arr=NULL, *search=NULL;

    

    printf("\nEnter number of elements to insert =");
    scanf("%d",&n);

    arr=(int*)malloc(n*(sizeof(int)));

    for(i=0;i<n;i++)
    {
        printf("Enter elements \n");
        scanf("%d",(arr+i));

    }

    printf("\nArray =");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));

    }

    search=(int*)malloc(sizeof(int));
    printf("\nEnter Element to be searched\n");
    scanf("%d",search);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(arr+i)> *(arr+j))
            {
                temp=*(arr+i);
                *(arr+i)=*(arr+j);
                *(arr+j)=temp;
            }
        }
    }

    printf("\n");

    for(i=0;i<n;i++)
    {
        printf("%d\t",*(arr+i));
    }

    printf("\n");

    low=0;
    high=n-1;
    while(high>=low)
    {
        mid=(high+low)/2;

        if(*(arr+mid)== *search)
        {
            
            
            printf("\nElement %d found At index %d" , *(arr+mid),mid);
            flag=1;
            break;
        }

        else if(*(arr+mid)> *search)
        {
            high=mid-1;
        }
        else if(*(arr+mid)< *search)
        {
            low = mid+1;
        }
    }

    if(flag==0)
    {
        printf("\nElement not Found\n");
    }

    free(arr);
    free(search);

    return 0;


}