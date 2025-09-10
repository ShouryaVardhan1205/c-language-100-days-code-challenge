// Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F

*/
#include<stdio.h>
     int main()
     {
       
       char grade;
       float marks;
       printf("Enter marks:");
       scanf("%f", &marks);
       
       if(marks<=100 && marks>=90)
       {
         grade = 'A';
       }
       else if(marks<90 && marks>=80)
       {
         grade = 'B';
       }
       else if(marks<80 && marks>=70)
       {
         grade = 'C';
       }
       else if(marks<70 && marks>=60)
       {
         grade = 'D';
       }
       
       else if(marks<60 && marks>=0)
       {
         grade = 'F';
       }
       else 
       {
         printf("Invalid marks, enter a value between 0 to 100.\n");
       return 0;
      }
       printf("Grade:%c", grade);

       return 0;
     }