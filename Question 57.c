// Q57: Find the sum of array elements.

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    // Output the sum
    printf("%d\n", sum);

    return 0;
}
