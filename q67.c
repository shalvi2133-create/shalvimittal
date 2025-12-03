// Insert an element in an array at a given position
#include <stdio.h>

int main() {
    int n, pos, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n + 1]; // extra space for new element

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter position (0-based) and element to insert: ");
    scanf("%d %d", &pos, &key);

    // Shift elements to right from position
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }

    arr[pos] = key; // insert element
    n++; 
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
