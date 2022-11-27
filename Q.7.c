//roots are imaginariy or real and equal
#include<stdio.h>
int main()
{
    int a,b,c,x;
    printf("enter the three number-");
    scanf("a=%d,b=%d,c=%d",&a,&b,&c);
    x=b*b-4*a*c;
    printf(" eqa. value is = %d",x);
    if(x>0)
        printf("\n roots are real and not equal");
    else
    {
        if(x==0)
        printf("\n roots are real and equal");
       else
        printf("\n roots are imaginary and not equal");
    }
    getch();
    return 0;

}
