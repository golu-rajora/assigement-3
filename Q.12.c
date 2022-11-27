//alphabet is lowercase and uppercase
#include<stdio.h>
int main()
{
    char c;
    printf("enter a alphabet=");
    scanf("%c",&c);
    if(c>=97)
         printf("alphabet is lowercase");
    else
    printf("alphabet is uppercase");
    getch();
    return 0;

}
