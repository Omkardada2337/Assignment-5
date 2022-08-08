// 8. Write a program to print squares of the first N natural numbers
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    system("cls");
    printf("Enter the value of N :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", i * i);
    }

    getch();
    return 0;
}