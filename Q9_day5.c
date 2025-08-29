//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>
  int main()
  {

    float p,r,t;  // Here p is principal amount, r is rate of interest and t denotes time.
    printf("Enter p:");
    scanf("%f", &p);
    printf("Enter r:");
    scanf("%f", &r);
    printf("Enter t:");
    scanf("%f", &t);
    
      //Simple Interest  
    float SI = (p*r*t)/100; // Here SI is simple interest.
      
      //Compound Interest (when compounded annually).
    float a = p*pow((1+r/100), t);
    float CI = a-p;
    printf("The SI for the given values for respective p,r and t is:%.2f\n",SI);
    printf("The CI for the given values for respective p,r and t is:%.2f\n",CI);
    return 0;
  }

