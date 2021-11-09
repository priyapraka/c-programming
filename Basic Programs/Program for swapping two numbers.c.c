//Program for swapping two numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int N1=0, N2= 0,Temp = 0;

    printf("\nEnter 2 Integer Numbers for Swapping ");
    scanf("%d%d",&N1,&N2);

    printf("\n Befor swap 1st number is = %d",N1);
    printf("\n Befor swap 2nd number is = %d",N2);

    Temp = N1;
    N1 = N2;
    N2 = Temp;

    printf("\n After swap 1st number is = %d",N1);
    printf("\n After swap 2nd number is = %d",N2);

    getch();
    return 0 ;



}
