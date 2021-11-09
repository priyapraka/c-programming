//program to accept number from user to check whether it is even or odd
#include<stdio.h>
#include<conio.h>
int main()
{
    int Num = 0;
    printf("\n\n Enter a number to check whether it is even or odd =  ");
    scanf("%d",&Num);

    if(Num == 0)
    {
        printf("\n Given Number %d is Neutral.",Num);
    }

    else if(Num % 2 == 0)
    {
        printf("\n Given Number %d is Even.",Num);
    }
    else
    {
       printf("\n Given Number %d is Odd.",Num);
    }

    printf("\n\n Thanks ");
    getch();
    return 0;

}

