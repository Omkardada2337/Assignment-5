// 5. Write a program to print the first N odd natural numbers in reverse order.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num;
    system("cls");
    printf("Enter the value of N :");
    scanf("%d", &num);
    for (i = num; i >= 1; i--)
    {
        printf("%d ", 2 * i - 1);
    }

    getch();
    return 0;
}