#include<stdio.h>
int main(){
    int i , j , flag , sign;
    int arr[3][3];
    printf("ENTER ELEMENTS =");
    for(i=0 ; i<3 ;i++)
    {
        for(j =0 ;j<3 ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    flag=0;

    for(i=0;i<3 ;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i<j || i>j)
            {
                
                if(arr[i][j]!=0)
                {
                    flag =0;
                    break;
                }
                
            }
            else{
                if(arr[i][j]==1){
                    flag=1;
                }
                else{
                    flag=0;
                    break;
                }

            }

        }
        if(flag == 0)
        {
            break;
        }
    }
    if(flag == 1)
    {
        printf("\n\nTHE GIVEN 2D ARRAY IS IDENTITY MATRIX\n");
    }
    else{
        printf("\n\nTHE GIVEN 2D ARRAY IS NOT IDENTITY MATRIX\n");


    }

    return 0;

    }
