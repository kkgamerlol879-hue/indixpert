#include<stdio.h>
int main()
{
    int unique_num[10]={2,3,2,6,5,4,9,6,7,5},counter;
    int i,j,k,n;

    for(i=0;i<10;i++)
    {
        printf("%d",unique_num[i]);
    }
    printf("\nthe unique number found in array\n");
    for(i=0;i<10;i++)
    {
     counter=0;
     for(j=0,k=n;j<k+1;j++)
    {
        if(i!=j)
        
        {
            if(unique_num[i]==unique_num[j])
            {
                counter++;
            }
        }
    }
    }
    if(counter==0)
    {
       printf("%d",unique_num[j]); 
    }
    printf("\n \n");
  
}