#include <stdio.h>

int main(void) {

  int array[10], i, findValue, flag = -1;

  for (i = 0; i < 10; i++) {
    printf("Enter the value on index array[%d]: ", i);
    scanf("%d", &array[i]);
  }

  printf("Enter the index that you want to find a value: ");
  scanf("%d", &findValue);

  for (i = 0; i < 10; i++) {
    if (array[i] == findValue) {
      flag = 0;
      break;
    }
  }

  if (flag == 0)
    printf("The value %d is found on index %d", findValue, i);
  else
    printf("The value %d is not found on index %d", findValue, i);

  return 0;
}