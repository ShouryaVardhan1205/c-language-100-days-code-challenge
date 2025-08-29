//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
     int main()
     {
    int n; // Here n is the total no. of natural numbers you want to sum.
    printf("Enter n:");
    scanf("%d", &n);
    int sum = (n*(n+1))/2;
    printf("The sum of the first n natural numbers is:%d", sum);

        return 0;
     }