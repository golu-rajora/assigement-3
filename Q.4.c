//Whether number is even or odd without using % operator
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    if(x&1)
        printf("number is odd");
    else
         printf(" number is even");
    getch();
    return 0;
}

