#include<stdio.h>
    int main()
    {

     float c;  // Here c represents degree celsius.
     printf("Enter c:");
     scanf("%.2f", &c);

     float f = (9.0/5.0*c)+32;
     printf("The value in fahrenheit is %.2f",f);
           // Here f represents degree fahrenheit.
        return 0;
    }