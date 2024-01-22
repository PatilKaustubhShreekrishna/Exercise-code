#include<stdio.h>
int main()
{
    char str1[100], str2[100];
    int i=0,count1 , count2,j , l1,l2, flag;
    printf("Enter a string 1 =");
    fgets(str1 ,sizeof(str1),stdin);
    printf("\nEnter string 2 =");
    fgets(str2,sizeof(str2),stdin);
    flag =0;
    count1= 0;
    count2=0;
    while(str1[i+1]!='\n')
    {
        count1++;
        i++;
    }
    i=0;
    while(str2[i+1]!='\n')
    {
        count2++;
        i++;
    }
    if(count1 != count2)
    {
        printf("NOT AN ANOGRAM STRINGS\n");
    }
    else{
        i=0;
        while(str1[i] != '\n')
        {
            j=0;
            l1=0;
            while(str1[j]!='\n')
            {
                if(str1[i]==str1[j])
                {
                    l1++;
                }
                j++;
            }
            j=0;
            l2=0;
            while(str2[j]!='\n')
            {
                if(str1[i]==str2[j])
                {
                    l2++;
                }
                j++;
            }
            if(l1==l2)
            {
                flag = 1;
                i++;
            }
            else{
                printf("NOT AN ANOGRAM STRINGS\n");
                break;
            }
        }
        if(flag ==1)
        {
            printf("GIVEN STRINGS ARE ANOGRAM STRING");
        }
        
    }
    return 0;


}