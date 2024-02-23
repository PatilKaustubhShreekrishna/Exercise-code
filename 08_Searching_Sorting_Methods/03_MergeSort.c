#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TRUE 1

void show(int* , int, const char*);
void input(int* , int);
void merge_sort(int* , int,int);
void merge_proc(int* , int ,int, int);

 
 int main()
 {
    int length;
    int* arr =NULL;
    puts("\nEnter Array Length =");
    scanf("%d",&length);

    arr =(int*)malloc(length * sizeof(int));


    input(arr , length );

    show(arr,length,"\nArray Before sorting --->\n");

    merge_sort(arr , 0 , length-1);

    show(arr,length,"\nArray After sorting --->\n");

    free(arr);

    arr =NULL;

    return 0;


 }


void input(int* a, int n)
{
    int i;
    srand(time(0));
    for(i=0 ; i<n ;i++)
    {
        a[i] = rand() % 1000;
    }
}

void show(int* a, int n, const char* msg) // msg : - message
{
    puts(msg);
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }

    puts("\n----------------------------------------------------\n");
}

void merge_proc(int* a ,int p , int q , int r)
{
    int i,j,k;
    int N1=q-p+1;
    int N2=r-q;
    int* a1 = NULL;

    a1 = (int*)malloc(N1 * sizeof(int));

    if(a1 == NULL)
    {
        puts("\nError in memory Allocation \n");
        exit(EXIT_FAILURE);
    }

    int* a2=NULL;

    a2= (int*)malloc(N2 * sizeof(int));

    if(a2 == NULL)
    {
        puts("\nError in memory Allocation \n");
        exit(EXIT_FAILURE);
    }

    for(i=0; i<N1; i++)
    {
        a1[i] =a[p+i];

    }

    for(i=0; i<N2; i++)
    {
        a2[i] = a[q+1+i];

    }

    i=0;
    j=0;
    k=0;

    while(TRUE)
    {

        if(a1[i] < a2[j])
        {
            a[p+k] = a1[i];
            k++;
            i++;

            if(i == N1)
            {
                while(j< N2)
                {
                    a[p+k] = a2[j];
                    j++;
                    k++;
                }
                break;
            }
        }
        else{
            a[p+k] = a2[j];
            k++;
            j++;

            if(j == N2)
            {
                while( i< N1)
                {
                    a[p+k] = a1[i];
                    i++;
                    k++;
                }
                break;
            }

        }
    }

    free(a1);
    a1=NULL;

    free(a2);
    a2=NULL;

}

void merge_sort(int* a , int low , int high) // lower_boundary(low) , upper_boundaryhigh)
{
    int mid;
    if(low<high)
    {
    mid = (low+high) / 2;

    merge_sort(a , low , mid );
    merge_sort(a , mid+1 , high);
    merge_proc(a , low , mid , high);
    }
}


