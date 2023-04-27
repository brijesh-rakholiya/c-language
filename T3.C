#include<stdio.h>
#include<conio.h>
main()
{
     float x,y,z,a;
     clrscr();
     printf("enter x= ");
     scanf("%f",&x);
     printf("enter y= ");
     scanf("%f",&y);
     printf("enter z= ");
     scanf("%f",&z);
     a=x*x+y*y+z*z+2*(x*y+y*z+z*x);
     printf("a = %f",a);
     getch();




}