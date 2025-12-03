//Search in a sorted array using binary search.
#include <stdio.h>

int main() {
    int n, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid;
    int index = -1;

    while (low <= high) {
        mid = (low + high) / 2;
        if (arr[mid] == key) {
            index = mid;
            break;
        } else if (arr[mid] < key) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (index != -1)
        printf("Found at index %d", index);
    else
        printf("-1");

    return 0;
}
