//greater number between two number and if both number are the same
#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the two number-");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf(" %d is greater number",a);
    else
    {
        if(a==b)
        printf(" both number are the same");
       else
        printf(" %d is greater number",b);
    }
    getch();
    return 0;

}
