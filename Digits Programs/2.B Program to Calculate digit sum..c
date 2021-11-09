//Program to Calculate digit sum.
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0, Sum = 0, Temp = 0;

    printf("Enter a Positive Number to Calculate Digit Sum =>\n");
    scanf("%d",&Num);

    if(Num < 0)
    {
        printf("\n Invalid Number...");
        return 0;
    }

    for(Temp = Num;Temp > 0;Sum += (Temp % 10),Temp = Temp/10);

    printf("\nDigit Sum of %d Number is =%d",Num,Sum);

    printf("\n\nThanks \n");

    getch();
    return 0;

}
