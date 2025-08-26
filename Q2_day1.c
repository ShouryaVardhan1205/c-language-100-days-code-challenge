#include<stdio.h>
    int main()
    {
       float a,b;   //Here a and b are two variables declared for getting the number input from the user.
       printf("Enter a:");
       scanf("%f", &a);
       printf("Enter b:");
       scanf("%f", &b);
       float sum = a+b, difference = a-b, product = a*b, quotient = a/b;
       printf("The sum of the given numbers is:%f\n",sum);
       printf("The difference of the given numbers is:%f\n",difference);
       printf("The product of the given numbers is:%f\n", product); 
       printf("The quotient of the given numbers is:%f\n", quotient); 
        return 0;
    }