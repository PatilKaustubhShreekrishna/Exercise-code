#include<stdio.h>
int main(){
    char str[100];
    int i=0, count ,j,temp,k;
    printf("Enter a string =");
    fgets(str , sizeof(str) , stdin);
    while(str[i] != '\n')
    {
        while(str[i]==' ')
        {
            i++;
            if(str[i+1]!= ' ')
            {
                printf(" ");
                break;
            }   
            
        }
        count = 0;
        while(str[i]!=' ' && str[i]!='\n')
        {
            i++;
            count++;
        }
        j= i;
        j--;
        while(count!= 0)  //while(j>=0 && str[j] !=' ')
        {
            printf("%c" , str[j]);
            j--;
            count--;

        }  
        
    }
    
    return 0;
}