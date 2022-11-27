//  RESULT PASSED AND FAILD OF THE STUDENT
#include<stdio.h>
int main()
{
    printf("student marks out of 100:-\n");
    int e,h,p,c,m;
    printf("enter marks of english =");
    scanf("%d",&e);
     printf("enter marks of Hindi =");
    scanf("%d",&h);
     printf("enter marks of Physics =");
    scanf("%d",&p);
     printf("enter marks of Chemestry =");
    scanf("%d",&c);
     printf("enter marks of Mathes =");
    scanf("%d",&m);
    if(e<=33)
        printf("student is faild");
    else
        if(h<=33)
        printf("student is faild");
    else
        if(p<=33)
        printf("student is faild");
     else
        if(c<=33)
        printf("student is faild ");
     else
        if(m<=33)
        printf("student is faild");
     else
        printf("student is passed");
     getch();
     return 0;

}
