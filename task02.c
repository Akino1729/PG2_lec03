#include <stdio.h>

int main()
{
  printf("Q2 : \n Enter three real numbers by typing a keyboard yourself, \n and code program to display means of them in an integer number. \n");
  printf("Enter three real numbers : ");
  float a, b, c;
  scanf("%f %f %f", &a, &b, &c);
  float mean = (a + b + c) / 3 + 0.5;
  printf("The mean of the three numbers is: %d\n", (int)mean);
  return 0;
}