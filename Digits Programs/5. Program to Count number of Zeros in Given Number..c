//Program to Count number of Zeros in Given Number.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, ZCnt = 0,Dig = 0;

    printf("\nEnter a Number to Count number of Zeros in it =>");
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
        Temp /= 10;
    }
    printf("\nCount of Zeros in Given Number %d =  %d .",No,ZCnt);

    getch();
    return 0;

}
