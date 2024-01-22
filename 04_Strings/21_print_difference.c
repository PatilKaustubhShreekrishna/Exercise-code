#include<stdio.h>

//OBJECTIVE : -
//Write a C program which accept two strings from user and compare 
//only first N characters of two strings. If both strings are equal
 //till first N characters then return
//0 otherwise return difference between first mismatch character.
 
int main()
{
    char astr[100], bstr[100];
    int i,j, flag;
    printf("Enter string a =");
    fgets(astr ,sizeof(astr) , stdin);
    printf("Enter string b =");
    fgets(bstr , sizeof(bstr) , stdin);
    i = 0;
    if(sizeof(astr) != sizeof(bstr))
    {
        printf("Both strings are not equal \n");
        printf("DIFFERENCE =%d",astr[0] - bstr[0]);
    }
    else{
        while(astr[i]!='\n')
        {
            flag =0 ;
            if(astr[i]== bstr[i] || astr[i] == bstr[i]+32 || astr[i] == bstr[i] - 32)
            {
                flag =1;
                i++;
            }
            else{
                printf("both stringd are NOT equal\n");
                printf("DIFFERENCE =%d" , astr[i] - bstr[i]);
                break;
            }
        }
        if(flag ==1 )
        {
            printf("BOTH STRINGS ARE EQUAL\n");
        }
    }
    return 0;
}