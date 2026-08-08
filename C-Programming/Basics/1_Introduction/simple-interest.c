// Write a Program to calculate the simple interest taking principal, rate of interest and nummber of years as inputs from user
// Developer: Prajwal Dhage
// Date: 26-4-2026

#include <stdio.h>
void main()
{
    int principal, years;
    float simpleInterest, roi; // short for rate of interest

    printf("Enter the Principal Amount: ");
    scanf("%d", &principal);
    printf("Enter the Rate of Interest: ");
    scanf("%f", &roi);
    printf("Enter the Number of Years: ");
    scanf("%d", &years);
    simpleInterest = principal * roi * years / 100;
    printf("Simple Interest: %f", simpleInterest);
}