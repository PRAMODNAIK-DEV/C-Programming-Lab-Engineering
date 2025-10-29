#include <stdio.h>

int main() {
    int n, key, i, found = 0;

    // Get number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    // Get array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Get the key to search
    printf("Enter the key element to search: ");
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Element %d found at position %d\n", key, i + 1);
            found = 1;
            break;
        }
    }

    if (found == 0) {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}