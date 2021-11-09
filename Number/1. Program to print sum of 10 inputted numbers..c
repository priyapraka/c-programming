//Program to print sum of 10 inputted numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int No=0, Sum=0, dCnt=0;
    printf("\n Enter 10 numbers to get there Sum ==>");

    for(dCnt = 1;dCnt <= 10;dCnt++)
    {

        printf("\n Enter Number %d = ",dCnt);
        scanf("%d",&No);

        Sum = Sum + No;

    }
    printf("\n Sum of 10 inputted number is =%d. ",Sum);

    printf("\nTHANKS");

    getch();
    return 0;

}
