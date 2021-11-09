// Program to find inputted no. is divisible by both 5 & 7 or only by 5 or only by 7 or not by both 5 & 7.
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    printf("\n Enter a Number = ");
    scanf("%d",&Num);

    if((Num % 5 == 0)&&(Num % 7 == 0))
    {
        printf("\nGiven number %d is divisible by both 5 & 7.",Num);
    }
    else if (Num % 5 == 0)
    {
        printf("\nGiven number %d is only divisible by 5.",Num);
    }
    else if (Num % 7 == 0)
    {
        printf("\nGiven number %d is only divisible by 7.",Num);
    }
    else
    {
        printf("\nGiven number %d is not divisible by both 5 & 7.",Num);
    }
    printf("\n Thanks.");
    getch();
    return 0;
}
