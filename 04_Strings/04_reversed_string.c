#include<stdio.h>
int main()
{
    char str[100];
    char temp;
    int i = 0, count=0;
    printf("Enter a string =");
    fgets(str , sizeof(str) , stdin);
    while(str[i]!='\n')
    {
        count++ ; 
        i++;
    }
    for(i = 0 ; i<count/2 ; i++)
    {
        temp=str[i];
        str[i]=str[count-i];
        str[count - i]=temp;
        
    }
    printf("\nReversed string = %s", str);
    return 0 ;
}