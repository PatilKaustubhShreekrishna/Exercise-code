#include<stdio.h>
int main()
{
    char str[100];
    int i=0,count ,j , k , temp;
    printf("enter a string =");
    fgets(str , sizeof(str) , stdin);

    while(str[i]!='\n')
    {
        while(str[i]==' ')
        {
            i++;
        }
        count =0;
        while(str[i]!=' ' && str[i]!= '\n')
        {
            i++;
            count++;
        }

        if(count%2 == 0){

            j=i - count ;
            k=i-1 ;
            while( j <= k)
            {
                temp = str[j];
                str[j]=str[k];
                str[k] = temp ;

                j ++;
                k --;
            }
        }       
        
    }

    printf("\nString =\n\t%s", str);


    return 0;
}