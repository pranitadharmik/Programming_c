#include<stdio.h>
void main()
{
int a,b,temp;
printf("enter the value of a=\n");
scanf("%d",&a);
printf("enter the value of b=\n");
scanf("%d",&b);
printf("values before swapping \na=%d,b=%d\n",a,b);

printf("values after swapping\n");
temp=b;
b=a;
a=temp;
printf("a=%d,b=%d",a,b);
}