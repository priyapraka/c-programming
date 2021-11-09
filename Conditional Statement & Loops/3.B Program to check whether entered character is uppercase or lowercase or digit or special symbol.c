//Program to check whether entered character is uppercase or lowercase or digit or special symbol
#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';

    printf("\n Enter a character to check whether is Uppercase or Lowercase => ");
    ch = getche();
    getch();

    if((ch >= 'A')&&(ch <= 'Z'))
    {
        printf("\n\n Given character %c is Uppercase letter.",ch);
    }
    else if((ch >= 'a')&&(ch <= 'z'))
    {
        printf("\n\n Given character %c is Lowercase Letter.",ch);
    }
    else if((ch >= '0')&&(ch <= '9'))
    {
        printf("\n\n Given character %c is Digit.",ch);
    }
    else
    {
        printf("\n\n Given character %c is Special Symbol.",ch);
    }

    printf("\n\n Thanks");
    getch();
    return 0;
}

