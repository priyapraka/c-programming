// Program to compute sum of digit of inputted 3 digit number.
#include<stdio.h>
#include<conio.h>

int main()
{
            int No = 0, Dig = 0, dSum = 0, Temp = 0, dCnt = 0;

            printf("\n\n Enter 3 Digit Number for Sum =>");
            scanf("%d",&No);

            Temp = No;

            if (No < 0)
            {
                        printf("\n\n Invalid Number!!!");
                        return -1;
            }

            while(Temp > 0)
            {
                        dCnt++;

                        Temp = Temp / 10;
            }

            if(dCnt == 3)
            {
                        Temp = No;
                        while(Temp > 0)
                        {
                            Dig = Temp % 10 ;
                            dSum = dSum + Dig ;
                            Temp /= 10;
                        }
                        printf("\n Sum of Digits in Given Number %d is = %d.",No,dSum);
            }
            else
            {
                        printf("\n Given Number is not 3 Digit Number !!!");
            }

            getch();
            return 0;

}
