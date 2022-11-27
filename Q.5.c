//Whether number is 3 digit or not
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    x=x/10;
    x=x/10;
    x=x/10;
    if(x==0)
        printf("it is 3 digit number");
    else
        printf("it is not 3 digit number");
    getch();
    return 0;
}


