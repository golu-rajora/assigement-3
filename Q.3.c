//Whether number is even or odd
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    if(x%2==0)
        printf("number is even");
    else
         printf(" number is odd");
    getch();
    return 0;
}
