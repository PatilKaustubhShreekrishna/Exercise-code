#include<stdio.h>
int main()
{
    char astr[100], bstr[100];
    int i,j , acount ,bcount ,flag;
    printf("Enter string a =");
    fgets(astr , sizeof(astr) , stdin);
    printf("Enter string b =");
    fgets( bstr , sizeof(bstr) ,stdin);

    i=0;
    acount =0;
    while(astr[i]!='\n')
    {
        acount++;
        i++;
    }
    i=0;
    bcount =0;
    while(bstr[i]!='\n')
    {
        bcount++;
        i++;
    }
    if(acount!= bcount)
    {
        printf("Strings are NOT equal");
        printf("\nDIFFERENCE of first mismatched char =%d",astr[0]-bstr[0]);
    }
    else
    {
        i=0;

        while(astr[i]!='\n')
        {
            flag =0;
            if(astr[i]==bstr[i])
            {
                i++;
                flag = 1;
            }
            else{
                printf("Strings are not equal\n");
                printf("Difference between first mismatched characters =%d",astr[i]-bstr[i]);
                break;
            }
        }  
        if(flag ==1)
        {
            printf("BOth Strings are EQUAL");
        } 
    }

    return 0;
}