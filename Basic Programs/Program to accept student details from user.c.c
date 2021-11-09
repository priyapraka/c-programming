//Program to accept student details from user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int R_no = 0;
    char Grade;
    float per = 0.0 ;
    char Nm[80] = " ";

    printf("\n Enter Student Details ==> ");

    printf("\n Enter Student Roll Number = ");
    scanf("%d",&R_no);

    fflush(stdin);

    printf("\n Enter Student Name = ");
    scanf("%s",&Nm);                          //gets(Nm);

    printf("\n Enter Student Percentage = ");
    scanf("%f",&per);

    printf("\n Enter Student Grade = ");
    Grade = getche();                                                //scanf("%c",&Grade);                    //Grade = getche();

    system("cls");

    printf("\n Student Information ==> \n");
    printf("\n=======================================");

    printf("\n\t Roll number = %d.\n\t Name        = %s.\n\t Percentage  = %.2f.\n\t Grade       = %c.",R_no,Nm,per,Grade);

    printf("\n=======================================");

    getch();
    return 0;

}
