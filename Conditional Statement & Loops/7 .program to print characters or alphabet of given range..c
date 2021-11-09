//program to print characters or alphabet of given range.
#include<stdio.h>
#include<conio.h>
int main()
{
    char Sch = '\0',Ech = '\0';

    printf("\n Enter a Starting Character  : ");
    scanf("%c",&Sch);

    printf("\n Enter a Ending Character  : ");
    Ech = getche();

    if(Sch < Ech)
    {
        for( ; Sch <= Ech; Sch++)
        {
            printf("\n %c",Sch);

        }
    }
    else
    {
        for( ; Sch >= Ech; Sch--)
        {
            printf("\n %c",Sch);

        }
    }

    getch();
    return 0;


}
