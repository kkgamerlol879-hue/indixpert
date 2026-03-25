#include<stdio.h>
int main()
{
    int math,english,science,hindi,total;
    float percentage; 
    char name[10]={"student"};
    
    
    printf("enter the name :-");
    scanf("%s",&name);

    printf("enter the math marks :-");
    scanf("%s",&math);

    printf("enter the english marks :-");
    scanf("%s",&english);

    printf("enter the science marks :-");
    scanf("%s",&science);

    printf("enter the hindi marks :-");
    scanf("%s",&hindi);
    
    total=math+english+science+hindi;
    percentage=total/4;

    printf("percentage=%f\n",percentage);

    if(percentage>=60)
    {
        printf("\n1th division\n");
    }
    else
    {
        printf("\n2th division\n");
    }
    printf("total:- %s \n maths = %s\n english = %s\n science = %s\n Sst = %s\n hindi = %s\n",total,math,english,science,Sst,hindi);
    printf("************************_LDM_SCHOOL***********************");


}