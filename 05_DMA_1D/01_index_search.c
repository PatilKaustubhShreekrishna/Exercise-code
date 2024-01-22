#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,flag=0;
    int  *ptr=NULL,*search=NULL;
    printf("Enter number of Elements to insert =");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));

    search = (int*)malloc(sizeof(int));

    printf("\nEnter Elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));

    }

    for(i=0;i<n;i++)
    {
    printf("%d\t",*(ptr+i));
    }


    printf("\nEnter Elements to search in Array\n");
    scanf("%d",search);

    for(i=0;i<n;i++)
    {
        if(*(ptr+i)== *search)
        {
            printf("Element %d found at index %d", *search, i);
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nElement not Found\n");
    }


    return 0;

}
