#include <stdio.h>

int main(void) {

  int array[11], newIndex, newValue;

  for (int i = 0; i < 10; i++){
    printf("Enter the value on index %d: ", i);
    scanf("%d", &array[i]);
  }

  printf("Enter the index of the new value you want to add: ");
  scanf("%d", &newIndex);

  printf("Enter the new value you want to add: ");
  scanf("%d", &newValue);
  
  for (int i = 9; i >= newIndex; i--) {
    array[i + 1] = array[i];
  }

  array[newIndex] = newValue;

  for (int i = 0; i < 11; i++){
    printf("%d ", array[i]);
  }

  return 0;
}