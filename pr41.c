#include <stdio.h>

int main(void) {

  int array[10], i, newIndex, newValue;

  for (i = 0; i < 9; i++) {
    printf("Enter the value on index array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("Enter the new value: ");
  scanf("%d", &newValue);

  array[9] = newValue;
  
  for (i = 0; i < 10; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}