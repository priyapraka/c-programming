//Program to calculate digit Count.
#include<stdio.h>
#include<conio.h>
int main()

{
    int Num = 0 ,dcnt = 0 , Temp = 0;

    printf("\nEnter a Positive Number to Calculate Digit Count =>\n");
    scanf("%d",&Num);

    Temp = Num;

    if(Temp < 0)
    {
        printf("\n\nInvalid Number ....");
        return -1;
    }

    while(Temp > 0)
    {
        dcnt++;
        Temp = Temp/10;

    }
    printf("\ndigit count of number %d is =%d",Num,dcnt);

    printf("\n Thanks \n");

    getch();
    return 0;
}
