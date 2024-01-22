#include<stdio.h>
#include<stdlib.h>
//write a C prg to create an array of n lelements using DMA to accept position 
//from user and delete element at given position from an arraY.

int main()
{
    int i,n;
    int* arr=NULL, *del=NULL;

    printf("\nEnter number of elements to insert =");
    scanf("%d",&n);

    arr=(int*)malloc(n*sizeof(int));

    printf("\nEnter elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    del =(int*)malloc(sizeof(int));

    printf("\nEnter Index number of Element to be Deleted\n");
    scanf("%d" , del);

    i=*(del);

    while(i<(n-1))
    {
        *(arr+i)=*(arr+i+1);
        i++;
    }
    *(arr+n-1)='\0';

    printf("\n");

    printf("RESULT =");

    for(i=0 ;i<n-1 ;i++)
    {
        printf("%d  ",*(arr+i));
    }


    free(arr);

    free(del);

    return 0;
}