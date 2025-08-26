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
