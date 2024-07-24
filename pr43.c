#include <stdio.h>

int main(void) {

  int array[10], i, sum = 0;

  for (i = 0; i < 10; i++) {
    printf("Enter the value on index array[%d]: ", i);
    scanf("%d", &array[i]);
    sum += array[i];
  }

  printf("The sum of the array is: %d\n", sum);

  return 0;
}