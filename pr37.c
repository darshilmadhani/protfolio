#include <stdio.h>

int main(void) {
  int number, count = 0;

  printf("Enter a number: ");
  scanf("%d", &number);

  while (number != 0) {
    number /= 10;
    count++;
  }

  printf("Total number of digits: %d\n", count);

  return 0;
}
