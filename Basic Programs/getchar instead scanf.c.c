#include<stdio.h>
#include<conio.h>
int main()
{
    char ch = '\0';
    printf("\n ..........Hello Indians..........\n\n");
    getch();

    printf("\n Are you Indian????(Yes / No)\n");
    ch = getchar();

    if(ch == 'Y' || ch == 'y')
    {
        printf("\n\n Welcome Dear :D\n\n");
    }
    else
    {
      printf("\n \n Bye Bye......\n\n");

    }

    getch();
    return 0 ;

}

