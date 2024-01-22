#include<stdio.h>
int main()
{
    char str1[100],str2[100];
    int i,j,n;
    printf("Enter a string =");
    fgets(str1 , sizeof(str1), stdin);
    printf("Enter string 2=");
    fgets(str2 , sizeof(str2),stdin);
    printf("Enter value of characters to append =");
    scanf("%d",&n);

    i=0;
    while(str1[i]!='\n')
    {
        i++;

    }
    j =0;
    while(j<n)
    {
        str1[i]=str2[j];
        i++;
        j++;
    }
    printf("Append string upto n char =\n%s",str1);
    return 0;
}