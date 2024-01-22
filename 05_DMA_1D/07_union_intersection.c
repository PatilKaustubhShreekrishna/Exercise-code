#include<stdio.h>
#include<stdlib.h>
//Write a C program to create an array of n elements using Dynamic
//memory allocation to Find Union & Intersection of 2 arrays.

int main()
{
    int a,b,i,k,j,flag,inter,uni,inter_count,uni_count;
    int *arr=NULL , *brr=NULL, *aub=NULL, *anb=NULL;

    printf("Enter size of first Array =");
    scanf("%d",&a);


    arr= (int*)malloc(a*sizeof(int));

    printf("\nEnter elements =");
    for(i=0;i<a;i++)
    {
        scanf("%d",(arr+i));
    }

    printf("\nEnter size of Second Array =");
    scanf("%d",&b);

    brr= (int*)malloc(b*sizeof(int));

    printf("\nEnter elements =");
    for(i=0;i<b;i++)
    {
        scanf("%d", (brr+i));

    }

    //INTERSECTION OF ELEMEMNTS 


    inter=0 ; //variable to append size of anb array whenever new element is inserted
    for(i=0;i<a;i++)    //  Finding size of intersection Array 
    {
        k=i;
        flag=0;
        while(k>=0)
        {
            k--;
            if(*(arr+k) ==  *(arr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            for(j=0;j<b;j++)
            {
                flag=0;
                if(*(arr+i)  ==  *(brr+j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                //*(anb+inter) = *(arr+i);
                inter++;
            }
        }

    }

    anb=(int*)malloc(inter*sizeof(int));  // inter = size of anb 

    inter_count=0;
    for(i=0;i<a;i++)   // Putting elements in itersection array
    {
        k=i;
        flag=0;
        while(k>=0)
        {
            k--;
            if(*(arr+k) ==  *(arr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            for(j=0;j<b;j++)
            {
                flag=0;
                if(*(arr+i)  ==  *(brr+j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                *(anb+inter_count) = *(arr+i);
                //inter++;
                inter_count++;
            }
        }

    }

    printf("\nIntersection : - ");
    for(i=0;i<inter;i++)
    {
        printf("%d  ",*(anb+i));
    }


    //UNION of arr and brr

    uni = 0 ;    // variable to find size of union array
    for(i=0;i<a;i++)
    {
        k=i;
        flag=0;
        while(k>=0)
        {
            k--;
            if(*(arr+k) == *(arr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            flag=0;
            for(j=0;j<b;j++)
            {
                if(*(arr+i)  ==  *(brr+j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag == 0)
            {
                uni++;
            }

        }

    }

    for(i=0;i<b;i++)
    {
        k=i;
        while(k>=0)
        {
            k--;
            flag=0;
            if(*(brr+k)  ==  *(brr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            flag=0;
            for(j=0;j<a;j++)
            {
                if(*(brr+i)  ==  *(arr+j))
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                uni++;
            }
        }
    }

    for(i=0;i<inter;i++)
    {
        uni++;
    }

    aub = (int*)malloc(uni*sizeof(int));  // giving memory to aub using DMA

    uni_count=0;
    for(i=0;i<a;i++)
    {
        k=i;
        flag=0;
        while(k>=0)
        {
            k--;
            if(*(arr+k) == *(arr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            flag=0;
            for(j=0;j<b;j++)
            {
                if(*(arr+i)  ==  *(brr+j))
                {
                    flag=1;
                    break;
                }
            }
            if(flag == 0)
            {
                *(aub+uni_count) = *(arr+i);
                uni_count++;
            }

        }

    }

    for(i=0;i<b;i++)
    {
        k=i;
        while(k>=0)
        {
            k--;
            flag=0;
            if(*(brr+k)  ==  *(brr+i))
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            flag=0;
            for(j=0;j<a;j++)
            {
                if(*(brr+i)  ==  *(arr+j))
                {
                    flag=1;
                    break;
                }

            }
            if(flag==0)
            {
                *(aub + uni_count) = *(brr+i);
                uni_count++;
            }
        }
    }

    for(i=0;i<inter;i++)
    {
        *(aub+uni_count) = *(anb+i);
        uni_count++;
    }

    printf("\nUnion : -");
    for(i=0 ; i<uni ;i++)
    {
        printf(" %d  ",*(aub+i));
    }

    free(arr);
    free(brr);
    free(aub);
    free(anb);


    return 0;

}
