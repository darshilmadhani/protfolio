#include <stdio.h>

int main() {
    int arr[5], i;
    printf("Enter 5 elements: ");
    for (i = 0; i < 5; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("Negative elements in the array: ");
    for (i = 0; i < 5; i++) {
        if (arr[i] < 0) {
            printf("%d\n", arr[i]);
        }
    }

    return 0;
}