#include <stdio.h>

int main()
{
  long a, b, c;
  printf("Q4 : If a class has 'a' students, create a program to calculate how many students will be unable to participate if 'b' teams (9 players each) are formed for baseball and 'c' teams (6 players each) for volleyball. \n");
  scanf("%ld %ld %ld", &a, &b, &c);
  long baseball_players = b * 9;
  long volleyball_players = c * 6;
  long gap = a - (baseball_players + volleyball_players);
  if (gap > 0)
  {
    printf("%ld students will be unable to participate.\n", gap);
  }
  else
  {
    printf("All students can participate.\n");
  }
  return 0;
}