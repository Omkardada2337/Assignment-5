// 10. Write a program to print a table of N.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    system("cls");

    printf("Enter the value of N : ");
    scanf("%d", &num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    getch();
    return 0;
}