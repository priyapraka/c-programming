//Program to Count ODD Digits in Given Number.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, OCnt = 0,Dig = 0;

    printf("\nEnter a Number to Count ODD Digits in it =>");
    scanf("%d",&No);

    Temp = No;

    if( No < 0)
    {
        printf("\nInvalid Number....");
    }

    while(Temp > 0)
    {
        Dig = Temp % 10 ;

        if(Dig % 2 == 1 && Dig != 0 )
        {
            OCnt++;
        }
        Temp /= 10;
    }
    printf("\nCount of ODD Digits in Given Number %d =  %d .",No,OCnt);

    getch();
    return 0;

}

