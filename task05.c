#include <stdio.h>

int main()
{
  printf("Q5 : \n Create a program that takes the height and base lengths of a triangle as input and calculates the area of the triangle. \nAssume that the height and base are real numbers.\n");
  printf("Enter the height and base of the triangle: ");
  float height, base;
  scanf("%f %f", &height, &base);
  if (height <= 0 || base <= 0)
  {
    printf("Height and base must be positive numbers.\n");
    return 0;
  }
  float area = 0.5 * base * height;
  printf("The area of the triangle is: %f\n", area);
  return 0;
}