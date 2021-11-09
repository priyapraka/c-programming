//Program to print square of number of given range.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int SNm = 0, ENm=0;

    printf("\n Enter Start Number  = ");
    scanf("%d",&SNm);

    printf("\n Enter Start Number  = ");
    scanf("%d",&ENm);

    while(SNm < ENm)
    {

        printf("\n  %4d  = %4d ",SNm,(SNm * SNm));
        SNm++;
    }


    printf("\n\n Thanks..");
    getch();
    return 0;

}
