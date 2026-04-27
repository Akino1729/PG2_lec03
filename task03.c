#include <stdio.h>

int main()
{
  long apple = 100;
  long orange = 88;
  long strawberry = 398;
  printf("Q3 : \n Enter each a number of Apple (100 /yen), Orange(88 /yen), Strawberry(398 /yen) by typing a keyboard yourself, \n and code program to display total price of them. \n");
  printf("Enter three quantities : ");
  long a, o, s;
  scanf("%ld %ld %ld", &a, &o, &s);
  if (a < 0 || o < 0 || s < 0)
  {
    printf("Quantities cannot be negative.\n");
    return 0;
  }
  long total = a * apple + o * orange + s * strawberry;
  printf("The total price of the three fruits is: %ld yen (tax included)\n", total);
  return 0;
}