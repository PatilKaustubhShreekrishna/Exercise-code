#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void get_data(int*, int);
void show(int* , int ,const char*);
int second_max(int* , int);


int main()
{
    int length,smax_num;
    int* arr= NULL ;

    puts("\nEnter Array length =");
    scanf("%d", &length);

    arr = (int*)malloc(length * sizeof(int));

    

    if(length<=1)
    {
        puts("\nInvalid Choice for Finding Second Max number\n");

        exit(EXIT_FAILURE);
    }
    else
    {
        get_data(arr ,  length);

        show(arr ,length , "\nArray Elements Are --->\n");
        smax_num=second_max(arr , length);

        printf("\nThe Second Maximum Number = %d",smax_num);

        exit(EXIT_SUCCESS);
    }

    free(arr);

    arr= NULL;

    return 0;
    
}

void get_data(int* a , int n )
{
    int i;
    srand(time(0));

    for(i=0 ;i<n ;i++)
        a[i] = rand() % 1000;
}

void show(int* a, int n, const char* msg)
{
    int i;
    puts(msg);
    for(i=0;i<n;i++)
        printf("%d   ", a[i]);
    
    puts("\n---------------------------------------------------------------------------------------\n");
    
}

int second_max(int* a, int n )
{
    int i,ind , num, max, smax;
    smax = -__INT_MAX__;
    max= smax + 1;
    for(i=0 ; i<n ;i++)
    {   
        if(a[i]>max )
        {
            max = a[i];
        }
        if(a[i]<max && a[i]>smax)
        {
            smax = a[i] ;
        }
    }

    return smax;
}
