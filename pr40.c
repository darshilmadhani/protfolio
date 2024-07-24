#include <stdio.h>

int main(void) {

  int array[10], i, deleteIndex;

  for (i = 0; i < 10; i++) {
    printf("Enter the value on index array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("Enter the index of the element you want to delete: ");
  scanf("%d", &deleteIndex);

  for (i = deleteIndex; i < 10; i++) {
    array[i] = array[i + 1];
  }

  for (i = 0; i < 9; i++) {
    printf("array[%d] = %d\n", i, array[i]);
  }

  return 0;
}