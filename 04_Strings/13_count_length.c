

#include<stdio.h>
int main()
{
    char str[100];
    int i=0,count,even=0,odd=0;
    printf("enter a string =");
    fgets(str , sizeof(str),stdin);
    while(str[i]!= '\n')
    {
        count = 0;
        while(str[i]!=' ' && str[i]!='\n')
        {
            i++;
            count++;
        }
        //count--;
        if(count%2 ==0)
        {
            even++;
        }
        else{
            odd++;
        }
        while(str[i]==' ')
        {
            i++;
        }
        
    }
    printf("\nOddlength =%d",odd);
    
    printf("\nEvenlength =%d",even);

    return 0;
}