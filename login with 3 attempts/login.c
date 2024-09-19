#include<stdio.h>
#include<stdlib.h>
void main()
{
    int user_id,password;
    int attempts=3;
    while(1)
    {
        printf("enter the user_id=\n");
        scanf("%d",&user_id);
        printf("enter password:");
        scanf("%d",&password);
        if (user_id==123 && password==456)
        {
            printf("login sucessfully");
            exit(0);

        }
        else
        {
            attempts--;
            printf("login failed\n");
        }
        if(attempts==0)
        {
        printf("you are blocked\n");
        exit(0);
        }

    }
    getchar();

}