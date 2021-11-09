// program to print sum of 10 inputted numbers.
// Date - 28/10/2021.
 #include<stdio.h>
 #include<conio.h>
 int main()
 {
     int Sum = 0,dcnt = 1,No = 1 , Num = 10;


     while(dcnt <= Num && No != 0 && No > 0)
     {
         printf("\n Enter the number %d = ",dcnt);

         scanf("%d",&No);

         Sum = Sum + No ;

         dcnt++;

     }
     printf("\n Sum of Numbers = %d ",Sum);
     printf("\n Thanks ");
     getch();
     return 0;

 }

