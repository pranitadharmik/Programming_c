#include<stdio.h>
void main()
{
    int a,calculation;
    printf("Enter the number of which you want table=");
    scanf("%d",&a);
    printf("TABLE\n");
   
    
   for (int i =1; i <=10; i++)
   {
   calculation=a*i;
    printf("%d*%d=%d\n",a,i,calculation);
   }
   
    

}
