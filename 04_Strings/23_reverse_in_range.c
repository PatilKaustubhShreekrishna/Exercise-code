#include<stdio.h>
int main()
{
    char str[100];
    int i, n1,n2,j ;
    printf("Enter a string =");
    fgets(str , sizeof(str),stdin);
    printf("Enter limit n1 =");
    scanf("%d" ,&n1);
    printf("Enter limit n2 =");
    scanf("%d" , &n2);
    i = 0;
    j=0;
    while(i<n1)
    {
        printf("%c" , str[i]);
        i++;
        j++;
    }
    
    while(i>=n1 && i< n2)
    {
        i++;
        j++;
        

    }
    while(j>=n1 )
    {
        printf("%c",str[j]);
        j--;
    }

    while(str[i]!='\n')
    {
        printf("%c" , str[i]);
        i++;
    }
    return 0;

}
