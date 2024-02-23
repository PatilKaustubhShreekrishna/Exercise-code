#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void getdata(int* , int);
void show(int* , int , const char*);
int bubble_srt(int* , int);
void swap(int* , int*);
int Binary_Search(int* ,int , int , int ,int);

int main()
{
    int length , val ,  index_val, key, low , high;
    int *arr = NULL;

    puts("\nEnter the Length of An Array - ");
    scanf("%d" , &length);

    if(length < 0 )
    {
        puts("\nInvalid Length For an Array");

        exit(EXIT_FAILURE);
    }

    arr= (int *)malloc(length* sizeof(int));

    if(arr == NULL)
    {
        puts("\nError in memory location \n");
        exit(EXIT_FAILURE);
    }

    getdata(arr , length );

    show( arr, length , "\nArray elements available : - \n");

    puts("\nWhich Element Do you want?\n");
    scanf("%d" , &key);

    val =bubble_srt(arr ,length);
    show(arr,length ,"\nArray After Sorting --->\n");

    printf("\nIterations done for sorting Array => %d\n" , val);

    //Binary search :
    low = 0;
    high = length-1;
    index_val = Binary_Search(arr, length , low ,high , key);

    if(index_val == -1)
        puts("\nElement Not Found\n\t\tTRY AGAIN NEXT TIME :)\n");
    
    else
        printf("\n************   HOORRAY!!!  ***************\n\tElement %d is found at index => %d\n" , key , index_val);

    exit(EXIT_SUCCESS);

    free(arr);
    arr= NULL;

    return 0 ;
}


int Binary_Search(int* a , int n , int low , int high , int search)
{
   
    int mid, i ;

    if(low <= high)
    {
    mid = (low + high ) / 2 ;
    
    if( a[mid] == search)
        return mid;
    if( a[mid] > search)
        return Binary_Search(a, n , low , mid-1 , search);
    if( a[mid] < search)
        return Binary_Search( a, n , mid+1 , high, search);
    }

    return -1;
}


void getdata(int* a,int n)  // n -  length of an array a
{
    int i;
    srand(time(0));  //time(0)  means  current time in milliseconds taken as integer input to srand() function.

    for(i=0 ;i<n ; i++)
        a[i]= rand() % 1000 ;

}

void show(int* a , int n , const char* ch)
{
    int i;
    puts(ch);
    for(i=0; i<n ;i++)
    {
        printf("%d   ", a[i]);
    }
    puts("\n");
}

int bubble_srt(int* a ,int n)
{
    int i,itr , flag ;
    for(itr=1 ; itr<n ; itr++)
    {
        flag=0 ;
        for(i=0 ; i < (n-itr) ; i++)
        {
            if(a[i] > a[i+1])
            {
                swap( (a+i) , (a+i+1));
                flag = 1;
            }
        }

        if( flag != 1)
        {
            break ;
        }
    }
    return itr;
}

void swap(int* a, int* b)
{
    int temp ;
    temp = *a;
    *a = *b ;
    *b = temp;
}