//Program to print Fibonacci series for given range.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0,No3 = 0,Cnt = 0;

    printf("\n Enter Count for Fibonacci Series =");
    scanf("%d",&Cnt);

    printf("\n Fibonacci Series of Given Count = ");

    for(No1 = 1;Cnt > 0;Cnt--)
    {
        printf("\t %d",No3);

        No3 = No1 + No2;

        No1 = No2;
        No2 = No3;

    }
    getch();
    return 0;


}
