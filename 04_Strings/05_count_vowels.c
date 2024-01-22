#include<stdio.h>
int main()
{
    char str[100] , vow[100];
    int i = 0,j = 0 , numvow=0 , numcons = 0;
    printf("Enter a string = ");
    fgets(str  , sizeof(str) , stdin);
    while(str[i]!='\n')
    {
        /*j=0;
        while(vow[j]!='\n')
        {
            if(str[i]==vow[j])
            {
                numvow++;
                j++;
                break;
            }
            else{
                numcons++;
                j++;
                break;

            }
        }
        i++;*/
        if(str[i]=='A'|| str[i]=='a'  || str[i]=='E' || str[i]=='e' || str[i]=='I' || str[i]=='i' || str[i]=='O' || str[i]=='O' || str[i]=='U' || str[i]=='u')
        {
            numvow++;

        }
        else{
            if(str[i]!=' '){
            numcons++;
            }
        }
        i++;
    }
    printf("\nnumber of vowels = %d", numvow);
    printf("\nnumber  of consonants = %d", numcons);
    return 0 ;

}