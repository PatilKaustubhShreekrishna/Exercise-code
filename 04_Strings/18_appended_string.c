#include<stdio.h>
int main()
{
    char str1[100] , str2[100];
    int i=0, j;
    printf("Enter a string 1 =");
    fgets(str1 , sizeof(str1) , stdin);
    printf("enter string 2=");
    fgets(str2 , sizeof(str2) , stdin);

    while(str1[i]!='\n')
    {
        i++;
    }
    j=0;
    while(str2[j]!='\n')
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    str1[i]='\0';
    printf("Appended string =\n%s",str1);
    return 0;
    
}