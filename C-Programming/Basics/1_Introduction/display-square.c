// Write a Program to accept a number and display its square
// Developer: Prajwal Dhage
// Date: 26-4-2026

#include <stdio.h>
void main()
{
    int number, square;
    printf("Enter a Number: ");
    scanf("%d",&number);
    square = number * number;

    printf("Squre of %d is %d", number, square);
}