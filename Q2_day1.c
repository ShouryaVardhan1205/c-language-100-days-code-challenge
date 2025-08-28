//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
    int main()
    {
       float num1,num2;   
       printf("Enter num1:");
       scanf("%f", &num1);
       printf("Enter num2:");
       scanf("%f", &num2);
       float sum = num1+num2, difference = num1-num2, product = num1*num2, quotient = num1/num2;
       printf("The sum of the given numbers is:%f\n",sum);
       printf("The difference of the given numbers is:%f\n",difference);
       printf("The product of the given numbers is:%f\n", product); 
       printf("The quotient of the given numbers is:%f\n", quotient); 
        return 0;
    }

