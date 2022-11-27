// number is divisible by 5 or not
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
    if(x%5==0)
        printf("  %d number is divisible by 5 ",x);
    else
        printf("  %d number is not  divisible by 5 ",x);
    getch();
    return 0;
}

