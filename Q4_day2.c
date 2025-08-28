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