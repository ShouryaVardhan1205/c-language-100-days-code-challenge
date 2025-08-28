Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.

/*
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>
int main()
{

    float length, breadth; 
    printf("Enter length:");
    scanf("%f", &length);
    printf("Enter breadth:");
    scanf("%f", &breadth);
    float perimeter = 2 * (length + breadth);
    float area = length * breadth;
    printf("The perimeter of the rectangle is:%f\n", perimeter);
    printf("The area of the rectangle is:%f", area);
    return 0;

}
