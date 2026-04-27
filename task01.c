#include <stdio.h>

int main()
{
  printf("Q1 : \n Enter three real numbers by typing a keyboard yourself, \n and code program to display mean of them in a real number. \n");
  printf("Enter three real numbers : ");
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float mean = (a + b + c) / 3;
  printf("The mean of the three numbers is: %f\n", mean);
  return 0;
}