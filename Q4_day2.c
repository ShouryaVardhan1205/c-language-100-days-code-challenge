//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include<stdio.h>
    int main()
    {

     float pi = 3.14;
     float radius;
     printf("Enter radius:");
     scanf("%f", &radius);
     float circumference = 2*pi*radius;
     float area = pi*radius*radius;
     printf("The circumference of the circle is %f\n", circumference);
     printf("The area of the circle is %f\n", area);
        
        return 0;

    }
