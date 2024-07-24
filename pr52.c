#include <stdio.h>

int main() {
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int numbers[rows][columns];

    printf("Enter elements of the 2D numbersay:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &numbers[i][j]);
        }
    }

    int largest = numbers[0][0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (numbers[i][j] > largest) {
                largest = numbers[i][j];
            }
        }
    }

    printf("The largest element in the 2D numbersay is: %d\n", largest);

    return 0;
}