// leap year is or not
#include<stdio.h>
int main()
{
  int x;
  printf("enter a year-");
  scanf("%d",&x);
  if(x%4==0)
    printf("%d is leap year",x);
  else
    printf("%d is not leap year",x);
  getch();
  return 0;
}
