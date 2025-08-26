#include <stdio.h>
int main()
{
    float a, b; // Declared two variables for taking the input of numbers: a and b.
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    printf("The sum of the given numbers a and b is:%f", a + b);
    return 0;
}
