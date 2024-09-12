#include<stdio.h>
void main()
{
    int a;
    printf("enter the value of a=");
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("the entered number is even=%d",a);
    }
    else{
        printf("the entered number is odd=%d",a);
    }
}
