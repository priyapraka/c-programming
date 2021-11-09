//Program to display table of numbers of any given range.
#include<stdio.h>
#include<conio.h>
int main ()
{
    int RNo =0, CNo=0, SNo=0,ENo = 0;

    printf("\n Enter a Range for table :\n");

    printf("\nEnter Starting Number = ");
    scanf("%d",&SNo);

    printf("\nEnter Ending Number = ");
    scanf("%d",&ENo);


    for(CNo = 1;CNo <= 10;CNo++)
    {
        if(SNo < ENo)
        {
            for(RNo = SNo;RNo <= ENo;RNo++)
            {
                printf("%3d  ",(RNo*CNo));
            }
        }
        else
        {
            for(RNo = SNo;RNo >= ENo;RNo--)
            {
                printf("%3d  ",(RNo*CNo));
            }
        }

        printf("\n");
    }
    getche();
    printf("\n\nThanks.");
    getch();
    return 0;

}
