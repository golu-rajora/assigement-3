//positive negitive or zero of the number
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number=");
    scanf("%d",&x);
      if(x==0)
            printf("number is zero");
        else
            if(x>0)
         printf("number is positive");
        else
            printf("number is negitive");
            getch();
            return 0;

}
