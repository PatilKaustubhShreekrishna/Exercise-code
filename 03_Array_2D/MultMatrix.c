#include<stdio.h>
int main()
{
    int a[3][3], b[3][3] , c[3][3];
    int sum;
    printf("Enter ellements for a=");
    for(int i=0 ; i<3 ; i++)
    {
        for(int j=0 ; j<3 ;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nenter elements for b =");
    for(int i=0 ; i<3 ;i++)
    {
        for( int j =0 ; j< 3 ; j++)
        {
            scanf("%d" , &b[i][j]);
        }
    }
    for(int i = 0 ; i< 3 ; i++)
    {

        for(int j=0  ; j<3 ; j++)
        {
            sum =0;

            for( int k=0 ; k<3 ; k++)
            {
                sum = sum+ a[i][k]*b[k][j] ;
            }

            c[i][j] = sum ;
        }
    }
    printf("\n");
    for(int i = 0 ; i<3 ; i++)
    {
        for( int j=0 ; j<3 ; j++)
        {
            printf("%d  " , c[i][j]);
        }
        printf("\n");
    }

    return 0;
}