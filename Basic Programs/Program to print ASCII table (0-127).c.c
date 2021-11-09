//Program to print ASCII table (0-127).
#include<stdio.h>
#include<conio.h>
int main()
{
    int No = 0;

    printf("\n ASCII Table is as follows==> ");
    while(No < 128)
    {
        printf("\n\t%c = %d",No,No);
        No++;
    }
    getch();
    return 0;

}
