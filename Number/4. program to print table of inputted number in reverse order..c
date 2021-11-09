//program to print table of inputted number in reverse order.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int No =0, dCnt=0;

    printf("\n Enter a number to print table of given number :");
    scanf("%d",&No);
    printf("\n Table of %d is = \n",No);

    for(dCnt = 10;dCnt >= 1;dCnt--)
    {

        printf("\n %3d * %3d = %3d",No,dCnt,(No*dCnt));

    }
    getche();
    printf("\n\nThanks.");
    getch();
    return 0;

}

