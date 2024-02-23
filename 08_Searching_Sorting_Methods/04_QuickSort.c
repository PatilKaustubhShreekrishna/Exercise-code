#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void input(int* , int);
void show(int* , int, const char*);
void quicksort(int* , int, int);
int partition(int* , int ,int);
time_t start_time, end_time, diff_time;

int main()
{
    int size;

    puts("\nEnter thr size of an array :");
    scanf("%d",&size);

    int* arr=NULL;

    arr=(int*)malloc(size * sizeof(int));

    if(arr==NULL)
    {
        puts("\nError in memory allocation\n");
        exit(EXIT_FAILURE);
    }

    input(arr ,size);
    show(arr,size,"\nArray Before Sorting --->\n");

    start_time = time(0);

    quicksort(arr ,0 , size-1);

    end_time = time(0);

    diff_time = end_time - start_time;

    show(arr , size , "\nArray After Sorting --->\n");

    printf("\nElapsed Time = %ld\n" , diff_time);
    exit(EXIT_SUCCESS);

    free(arr);
    arr=NULL;

    return 0;
}

void input(int* a , int n)
{
    int i;
    srand(time(0));

    for(i=0;i<n;i++)
    {
        a[i] = rand();
    }

}

void show(int* a , int n, const char* msg)
{
    puts(msg);
    int i;
    for(i=0;i<n ; i++)
    {
        printf("%d  ", a[i]);
    }

    puts("\n---------------------------------------\n");

}

int partition(int* a, int p , int r)
{
    int pivot, i, j,temp;
    pivot = a[r];
    i= p-1;
    for(j=p ; j<r ; j++)
    {
        if(a[j] < pivot)
        {
            i++;
            temp = a[i+1];
            a[i+1]  = a[j];
            a[j] = temp;
        }
    }

    temp =a[i+1];

    a[i+1] = a[r];

    a[r] = temp;

    return (i+1);

}

void quicksort(int* a , int p , int r)
{
    int q;
    if(p<r)
    {
        q=partition(a,p,r);
        quicksort(a, p, q-1);
        quicksort(a ,q+1, r);
    }
}


