//Program to print factorial of given number.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0,Fact = 0,Temp = 0;

    printf("\nEnter Number to Calculate its Factorial = ");
    scanf("%d",&No);

    Temp = No;

    for(Fact = 1 ; Temp > 1; Temp--)
    {
        Fact = Fact * Temp ;

    }
    printf("\n Factorial of Number %d is = %d",No,Fact);

    printf("\n \n Thanks.");

    getch();
    return 0 ;

}
