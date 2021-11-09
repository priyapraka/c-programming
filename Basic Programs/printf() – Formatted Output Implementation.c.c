//printf() – Formatted Output Implementation.
#include<stdio.h>
#include<conio.h>
int main()
{
    printf("\n\tStudents Details are as follows:\n");

    printf("\n\t===============================================\n");

    printf("\n %4d %-10s %-10s %3d %3d %3d %3d %6.2f",214,"Sunita","Mohite",90,50,40,180,60.9963);
    printf("\n %4d %-10s %-10s %3d %3d %3d %3d %6.2f",214,"Harry","Mane",88,55,70,200,80.9963);
    printf("\n %4d %-10s %-10s %3d %3d %3d %3d %6.2f",214,"Pooja","Patil",50,50,40,140,52.9963);

    printf("\n\n\t================================================\n");
    printf("\n\n\tThanks.");

    getch();
    return 0;

}
