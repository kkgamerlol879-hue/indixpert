#include<stdio.h>
int main()
{
    int firstvalue=200;
    int secvalue=300;
    int thrdvalue=500;

    int multi,sub,divid,add;

    add=firstvalue+secvalue+thrdvalue;
    sub=firstvalue-secvalue-thrdvalue;
    multi=firstvalue*secvalue*thrdvalue;
    divid=firstvalue/secvalue/thrdvalue;
    
    printf(" add= %d\t sub= %d\t multi= %d\t divid= %d\t",add,sub,multi,divid);
    
}