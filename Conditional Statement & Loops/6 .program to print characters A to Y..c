//program to print characters A to Y.
#include<stdio.h>
#include<conio.h>
int main()
{
    char Sch = '\0',Ech = 'Y';
    printf("\n Characters from A to Y : ");

    for(Sch = 'A';Sch <= Ech;Sch++)
    {
        printf("\n %c",Sch);

    }
    getch();
    return 0;


}
