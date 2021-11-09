//Program to display reverse number of inputted number.
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, Rev = 0, Temp = 0;

    printf("\nEnter a Number to Reverse its Digits =  ");
    scanf("%d",&Num);

    Temp = Num ;

    if(Temp < 0)
    {
        printf("\nInvalid Number...");
    }

    while(Temp > 0)
    {
        Rev = (10 * Rev) + (Temp % 10);
        Temp = Temp / 10 ;
    }

    printf("\nReverse of Given number %d is = %d",Num,Rev);
    printf("\n\nThanks....");

    getch();
    return 0;

}
