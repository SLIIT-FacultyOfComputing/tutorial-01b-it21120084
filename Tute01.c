/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
      //variable declaration
      int eng, sc;
      float avg, tot;

      //getting inputs
      printf("Enter marks for Science :");
      scanf("%d", &sc);
      printf("Enter marks for English :");
      scanf("%d", &eng);

      //Calculations
      tot=sc+eng;
      avg=tot/2;
      
      //printing the output
      printf("The total is %.2f\n", tot);
      printf("The average is %.2f",avg);
  
  return 0;
}

