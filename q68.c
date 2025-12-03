// Delete an element from an array
#include <stdio.h>

int main() {
    int n, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0-based) of element to delete: ");
    scanf("%d", &pos);

    if (pos < 0 || pos >= n) {
        printf("Invalid position");
        return 0;
    }

    
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--; // decrease size

    // Print updated array
    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
