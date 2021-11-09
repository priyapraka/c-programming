//Program to Count Zeros ,Even and Odd Digits in Given Number.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0,ZCnt = 0, ECnt = 0, OCnt = 0,Dig = 0;

    printf("\n\nEnter a Number to Count ODD Digits in it =>");
    scanf("%d",&No);

    Temp = No;

    if( No < 0)
    {
        printf("\nInvalid Number....");
    }

    while(Temp > 0)
    {
        Dig = Temp % 10 ;

        if(Dig == 0 )
        {
            ZCnt++;
        }

        else if(Dig % 2 == 0 && Dig != 0 )
        {
            ECnt++;
        }

        else if(Dig % 2 == 1 && Dig != 0 )
        {
            OCnt++;
        }
        Temp /= 10;
    }
    printf("\n\nCount of Zeros in Given Number %d =  %d .",No,ZCnt);
    printf("\n\nCount of Even Digits in Given Number %d =  %d .",No,ECnt);
    printf("\n\nCount of ODD  Digits in Given Number %d =  %d .",No,OCnt);

    getch();
    return 0;

}

