//Program to print Num1 raise to Num2.  program to accept numbers from user as x and y and print x^y.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int N1 = 0, N2 = 0, Pow = 1, Temp = 0;

    printf("\n Enter Base = ");
    scanf("%d",&N1);

    printf("\n Enter Exponent = ");
    scanf("%d",&N2);

    Temp = N2;

    while(Temp > 0)
    {
        Pow = Pow * N1;
        Temp--;
    }
    printf("\n Power (%d) ^ %d = %d ",N1,N2,Pow);

    printf("\n Thanks..");
    getch();
    return 0;

}
