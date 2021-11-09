//Program to make sum of numbers till user enter zero/-ve number//Program to make sum of numbers till user enter zero/-ve number
 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main ()
{
    int No = 0, Sum = 0,Cnt = 1;

    printf("\n Enter to calculate their sum \n (will stop summation after 0 or -ve input)==> ");

    for( Cnt = 1; ;Cnt++ )
    {
        printf("\n\t Enter Number %d = ",Cnt);
        scanf("%d",&No);

        if(No <= 0)
        {
            break;
        }
        Sum = Sum + No;

    }

    printf("\nSummation of given number is = %d",Sum);

    printf("\n\n Thanks .");
    getch();
    return 0;

}
