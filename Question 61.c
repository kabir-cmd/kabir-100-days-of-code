// Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key, index = -1;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input element to search
    scanf("%d", &key);

    // Linear search
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            index = i;  // store index (0-based)
            break;      // stop once found
        }
    }

    // Output result
    if (index == -1)
        printf("-1\n");
    else
        printf("Found at index %d\n", index);

    return 0;
}
