#include<stdio.h>
int main()
{
    char str[100];
    int i,count, j , flag=0;
    printf("Enter a string =");
    fgets(str , sizeof(str) , stdin);
    i=0,count=0;
    while(str[i] != '\n')
    {
        count++;
        i++;
    }
    i--;
    j=0;
    while(i>=j)
    {
        flag =0;
        if(str[i]==str[j])
        {
            i--;
            j++;
            flag =1 ;
        }

        else{
            printf("NOT PALINDROME\n");
            break;
        }
    }

    if(flag ==1)
    {
        printf("PAlLINDROME STRING\n");
    }

    return 0;
}