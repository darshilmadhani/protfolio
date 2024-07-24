#include <stdio.h>
#define SIZE 10

int main(void) {

  int arr[SIZE], min, max;

  for (int i = 0; i < SIZE; i++) {
    printf("Enter the value on index %d: ", i);
    scanf("%d", &arr[i]);
  }
  
  max = arr[0];
  min = arr[0];

  for (int i = 0; i < SIZE; i++) {
    if (arr[i] <= min) {
      min = arr[i];
    }
    if (arr[i] >= max) {
      max = arr[i];
    }
  }

  printf("Minimum element: %d\n", min);
  printf("Maximum element: %d\n", max);

  return 0;
}