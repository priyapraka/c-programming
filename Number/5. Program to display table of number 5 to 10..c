//Program to display table of number 5 to 10.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int RNo =0, CNo=0;

    printf("\n table of number 5 to 10 :\n");

    for(CNo = 1;CNo <= 10;CNo++)
    {
        for(RNo = 5;RNo <= 10;RNo++)
        {
            printf("%3d  ",(RNo*CNo));
        }

        printf("\n");
    }
    getche();
    printf("\n\nThanks.");
    getch();
    return 0;

}
