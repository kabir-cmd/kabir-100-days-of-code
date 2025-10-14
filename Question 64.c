// Q64: Find the digit that occurs the most times in an integer number.

#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0};  // frequency of digits 0-9
    int digit, maxFreq = 0, result = 0;

    // Input number
    scanf("%lld", &num);

    // Count digit frequencies
    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    // Find digit with maximum frequency
    for (int i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            result = i;
        }
    }

    // Output result
    printf("%d\n", result);

    return 0;
}
