/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

   int no1,no2;
  int avg;

  printf("Enter Number 1:");
  scanf ("%d", &no1);

  printf("Enter Number 2:");
  scanf ("%d", &no2);

  avg = (no1 + no2)/2

  printf("Avegrage is:%d", avg);
  
  return 0;
}

