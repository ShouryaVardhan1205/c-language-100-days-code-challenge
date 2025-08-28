//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include <stdio.h>
int main()
{
    float num1, num2; 
    printf("Enter num1:");
    scanf("%f", &num1);
    printf("Enter num2:");
    scanf("%f", &num2);
    printf("The sum of the given numbers a and b is:%f", num1 + num2);
    return 0;
}

