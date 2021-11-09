//Program to find maximum from 2 numbers 2nd approach
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num1 = 0, Num2 = 0;

    printf("\n Enter 2 Integer Number = ");
    scanf("%d%d",&Num1,&Num2);

    if(Num1 == Num2)
    {
        printf("\nBoth numbers are equal.");
    }

    else if (Num1 > Num2)
    {
        printf("\n Number %d is Maximum. ",Num1);
    }
    else
    {
        printf("\n Number %d is Maximum.",Num2);
    }
    printf("\n\nThanks.");
    getch();
    return 0;

}
