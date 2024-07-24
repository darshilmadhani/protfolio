#include <stdio.h>

int main(void) {

  int arr[] = {1, 2, 3, 4, 5};
  int new_values[] = {10, 20, 30, 40, 50};
  
  printf("Older values: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }

  printf("\n");
  
  for (int i = 0; i < 5; i++) {
    arr[i] = new_values[i];
  }
  
  printf("New values: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", arr[i]);
  }
  
  return 0;
}