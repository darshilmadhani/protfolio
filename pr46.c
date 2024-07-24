#include <stdio.h>
#define SIZE 7

int main(void) {

  int arr[] = {1, 2, 2, 3, 4, 2, 5}, deleteItem = 2, newSize = 0,
      newArray[7] = {};

  printf("Array before deleting the %d:\n", deleteItem);
  for (int i = 0; i < SIZE; i++) {
    printf("%d\n", arr[i]);
  }

  for (int i = 0; i < SIZE; i++) {
    if (arr[i] != deleteItem) {
      newArray[newSize] = arr[i];
      newSize += 1;
    }
  }

  printf("Array after deleting the %d:\n", deleteItem);
  for (int i = 0; i < newSize; i++) {
    printf("%d\n", newArray[i]);
  }

  return 0;
}