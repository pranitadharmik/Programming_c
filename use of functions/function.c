#include<stdio.h>
int mul();//declare
void main()
{
    mul();//calling
}
int mul()//define
{
    int a,b,result;
    printf("enter the value of a=");
    scanf("%d",&a);
     printf("enter the value of b=");
    scanf("%d",&b);
    result=a*b;
    printf("MULTIPLICATION IS=%d",result);
}