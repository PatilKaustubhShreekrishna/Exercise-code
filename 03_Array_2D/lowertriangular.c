#include<stdio.h>
int main(){
    int arr[3][3];
    int i , j, flag;
    printf("Enter 3X3 matrix =");
    for(i = 0 ; i<3 ;i++)
    {
        for(j=0 ; j<3 ;j++)
        {
            scanf("%d" ,&arr[i][j]);
        }
    }
    flag =0;

    for(i=0 ; i< 3 ;i++)
    {
        for(j=0 ;j<3 ; j++)
        {
            if(i<j)
            {
                if(arr[i][j]!=0)
                {
                    flag = 0;
                    break;
                }
                else{
                    flag =1;
                }
            }
            else{
                if(arr[i] == 0)
                {
                    flag =0;
                
                }
            }
        }
        if(flag ==0)
        {
            break;
        }
    }
    if(flag ==1)
    {
        for(i = 0 ; i<3 ;i++)
        {
            for(j=0 ; j<3  ; j++ )
            {
                printf("%d",arr[i][j]);
            }
        }
        printf("\tIT IS An UPPER TRIANGULAR MATRIX\n");
    }
    else{for(i = 0 ; i<3 ;i++)
        {
            for(j=0 ; j<3  ; j++ )
            {
                printf("%d  ",arr[i][j]);
            }
            printf("\n");
        }
        printf("IT IS NOT AN UPPER TRIANGULAR MATRIX\n");

    }

    return 0;

}