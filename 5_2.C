#include<stdio.h>
#include<conio.h>
main()
{
  int a;
  clrscr();
  printf("enter the value of a:");
  scanf("%d",&a);
  if(a<0)
  {
  printf("%d is negetive");
  }
  else if(a==0)
  {
  printf("%d is nutural");
  }
  else
  {
  printf("%d is positive");
  }
  getch();
 }


