//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
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


