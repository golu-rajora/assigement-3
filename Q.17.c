// takes the length of the sides of a triangle as an input. Display whether the triangle is valid or not
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the a,b,c format\n");
    printf("enter the three sides length of the triangle-");
    scanf("a=%d,b=%d,c=%d",&a,&b,&c);
    if(a+b>c){
        if(a+c>b)
        {
           if(b+c>a)
               printf("triangle is valid");
               else
                 printf("triangle is not vaild");

        }
        else
             printf("triangle is not vaild");
    }
    else
        printf("triangle is not vaild");
    getch();
    return 0;
}
