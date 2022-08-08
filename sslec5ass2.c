// 2. Write a program to print the first N natural numbers.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    system("cls");
    printf("Enter the number :");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        printf("%d ", i);
    }

    getch();
    return 0;
}