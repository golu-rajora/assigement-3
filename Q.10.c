// cost and loss percentage
#include<stdio.h>
int main()
{
    int c,s;
    printf("enter a cost of the product-");
    scanf("%d",&c);
    printf("enter a sell of the product-");
    scanf("%d",&s);
    if(c>s)
   {
       int y,z;
       y=s-c;
    printf("loss is = %d",y);
    z=y*100;
    printf("\n percentage of loss is=%d%%",z/c);
   }
    else
    {
        int y,z;
        z=s-c;
    printf("profit is = %d",z);
    y=z*100;
    printf("\n percentage of profit is=%d%%",y/c);
    }
    getch();
    return 0;
}
