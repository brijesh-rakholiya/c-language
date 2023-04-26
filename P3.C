#include<stdio.h>
#include<conio.h>

main()
{
    int firstangle,secondangle,thirdangle;
    clrscr();
    printf("firstangle=");
    scanf("%d",&firstangle);
    printf("secondangle=");
    scanf("%d",&secondangle);
    thirdangle=180-firstangle-secondangle;
    printf("thirganglr=%d",thirdangle);
    getch();

}