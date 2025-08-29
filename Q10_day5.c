// Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main()
{
   int sec; // Here sec denotes time in seconds.
   int hours, minutes, seconds;

   printf("Enter time in seconds:");
   scanf("%d", &sec);

   // Calculating the seconds into Hours, minutes and seconds.
   hours = sec / 3600;
   minutes = (sec % 3600) / 60;
   seconds = (sec % 60);

   printf("The given seconds in HH:MM:SS format: %02d:%02d:%d\n", hours, minutes, seconds);
   return 0;
}