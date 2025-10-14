Q65: Search in a sorted array using binary search.

#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;  // avoid overflow

        if (arr[mid] == target) {
            return mid;   // found
        }
        else if (arr[mid] < target) {
            low = mid + 1;   // search right half
        }
        else {
            high = mid - 1;  // search left half
        }
    }
    return -1;  // not found
}

int main() {
    int n, target;

    // Input array size
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);

    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
