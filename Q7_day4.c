//Q7: Write a program to swap two numbers without using a third variable.
#include<stdio.h>
    int main()
    {
      
        int a,b; //
        printf("Enter a:");
        scanf("%d", &a);
        printf("Enter b:");
        scanf("%d", &b);
        a = a*b;  //swapping without a third variable.
        b = a/b;
        a = a/b;
        
        printf("a is: %d\n b is: %d", a,b);

        return 0;
    }
