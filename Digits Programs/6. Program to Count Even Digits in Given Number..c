//Program to Count Even Digits in Given Number.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, ECnt = 0,Dig = 0;

    printf("\nEnter a Number to Count Even Digits in it =>");
    scanf("%d",&No);

    Temp = No;

    if( No < 0)
    {
        printf("\nInvalid Number....");
    }

    while(Temp > 0)
    {
        Dig = Temp % 10 ;

        if(Dig % 2 == 0 && Dig != 0 )
        {
            ECnt++;
        }
        Temp /= 10;
    }
    printf("\nCount of Even Digits in Given Number %d =  %d .",No,ECnt);

    getch();
    return 0;

}
