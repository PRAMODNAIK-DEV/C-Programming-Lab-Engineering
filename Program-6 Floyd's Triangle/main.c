#include <stdio.h>

int main() {
    int rows, i, j;
    int num = 1;  // start number for the triangle

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("\nFloyd's Triangle:\n");

    for (i = 1; i <= rows; i++) {
        
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
