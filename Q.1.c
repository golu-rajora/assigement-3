//given number is positive or non positive
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    if(x>=0)
        printf(" number is positive");
    else
        printf(" number is not positive");
    getch();
    return 0;
}
