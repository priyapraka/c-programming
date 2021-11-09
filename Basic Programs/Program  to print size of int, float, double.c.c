//Program  to print size of int, float, double
#include<stdio.h>
#include<conio.h>
int main()
{
    int no = 40;
    char ch = '\0';

    printf("\n Size for integer no is = %d.",sizeof(no));
    printf("\n Size for Character variable ch is = %d.",sizeof(char));
    printf("\n Size for float datatype is = %d.",sizeof(float));
    printf("\n Size for double datatype is = %d.",sizeof(double));

    printf("\n Thanks");

    getch();
    return 0;

}

