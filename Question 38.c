// Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Sum of digits
    while(num != 0) {
        sum += num % 10;
        num /= 10;
    }

    // Display result
    printf("%d\n", sum);

    return 0;
}
