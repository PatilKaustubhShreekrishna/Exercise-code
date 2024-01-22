#include<stdio.h>
int main()
{
    char str[100];
    int i =0 , cap=0 , small=0 , spac =0, dig=0;
    printf("Enter a string =");
    fgets(str , sizeof(str) , stdin);
    while(str[i]!='\n')
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            cap++;
        }
        else if(str[i]>='a'&& str[i]<='z')
        {
            small++;

        }
        else if(str[i]==' ')
        {
            spac++;

        }
        else if(str[i]>='0'&& str[i]<='9')
        {
            dig++;
        }
        i++;
    }
    printf("\nCapital =%d", cap);
    printf("\nSmall =%d", small);
    printf("\nSpaces= %d",spac);
    printf("\ndigits = %d", dig);
    return 0;
    
}