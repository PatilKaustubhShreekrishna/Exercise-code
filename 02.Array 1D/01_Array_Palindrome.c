#include<stdio.h>
int main()
{
    int n,temp, i, rem,rev;
    int arr[100];
    printf("enter number = ");
    scanf("%d", &n);
    for(i=0 ; i<n ; i++)
    {
        printf("Enter array element=");
        scanf("%d",&arr[i]);
    }
    for(i=0 ; i<n ; i++)
    {
        temp = arr[i];
        rev=0;
        while(temp != 0 )
        { 
            
            rem = temp % 10;
            rev= rev*10 + rem;
            temp= temp/10;

        }
        if(arr[i]==rev)
        {
            printf("%d is palindrome number\n",arr[i]);
        }
        
    }
    return 0;

}