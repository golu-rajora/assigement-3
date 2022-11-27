//Write a program which takes the month number as an input and display number of days in that month.
#include<stdio.h>
int main()
{
    int x;
    printf("enter number of month-");
    scanf("%d",&x);
    if(x==4||x==6||x==9||x==11)
    printf("in month 30 days");
    else
        if(x==2)
        printf("in month 28 days");
    else
        printf("in month 31 days");
    getch();
    return 0;
}
