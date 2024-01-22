#include<stdio.h>
int main()
{
    int i , j , flag=0;
    int arr[3][3];
    printf("Enter elements =");
    for(i=0 ;i<3 ;i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0 ;i<3 ;i++)
    {
        for(j=0;j<3;j++)
        {
            flag =0;
            if(arr[i][j] != arr[j][i])
            {
                flag =1;
                break;
            }

        }
        if(flag ==1)
        {
            break;
        }
    }

    if(flag==1)
    {
        printf("GIVEN 2D ARRAY IS NOT SYMMETRIC");
    }
    else{
        printf("GIVEN 2D ARRAY IS SYMMETRIC");
    }

    return 0;
}