// check whether a given character is an alphabet (uppercase), an alphabet (lower case), a digit or a special character
#include<stdio.h>
int main()
{
    char c;
    printf("enter a character=");
    scanf("%c",&c);
    printf("ASCII CODE IS=%d\n",c);
    if(c<47)
        printf("it is special character");
    else
        if(c<57)
        printf("it is digit");
    else
        if(c<90)
        printf("it is upparcase");
    else
        printf("it is lowercase");
    getch();
    return 0;

}

