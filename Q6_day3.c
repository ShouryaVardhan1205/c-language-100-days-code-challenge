//Swap two numbers using a third variable.
#include <stdio.h>
int main()
{
    float a,b,c; //Here c is the third variable.
    printf("Enter a:");
    scanf("%f", &a);
    printf("Enter b:");
    scanf("%f", &b);
    c = a;
    a = b;
    b = c;
    printf("a is: %.2f\n and b is: %.2f", a,b);
        return 0;
}