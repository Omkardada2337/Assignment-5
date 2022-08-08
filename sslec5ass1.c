// 1. Write a program to print MySirG N times on the screen
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i,num;
    system("cls");

    printf("Enter the number : ");
    scanf("%d",&num );
for ( i = 1; i <= num; i++)
{
    printf("MySirG\n");
}

    getch();
    return 0;
}