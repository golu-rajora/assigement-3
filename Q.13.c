//divisible by 2 and 3 of the number
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number-");
    scanf("%d",&x);
   if(x%2==0&&x%3==0)
    printf(" %d number is divisible by 2 and 3 ",x);
   else
    printf(" %d number is not divisible by 2 and 3 ",x);
    getch();
    return 0;
}
