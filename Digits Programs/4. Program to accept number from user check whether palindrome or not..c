//program to accept number from user check whether palindrome or not.
#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Rev = 0, Temp = 0;

    printf("\n Enter a Number to check whether Palindrome or Not => ");
    scanf("%d",&No);

    Temp = No;

    if(No < 0)
    {
        printf("\nInvalid Number....");
    }

    while(Temp > 0 )
    {
        Rev = Rev * 10 + Temp % 10;
        Temp /= 10;
    }

    if (No == Rev)
    {
        printf("\n\n AS %d == %d",No,Rev);
        printf("\n\n Given Number %d is Palindrome. ",No);
    }

    else
    {
        printf("\n\n AS %d != %d",No,Rev);
        printf("\n\n Given Number %d is not Palindrome. ",No);
    }

    printf("\n\n Thanks ..");
    getch();
    return 0;
}
