// Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, newNum;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    // Count number of digits
    digits = (int)log10(num);

    first = num / (int)pow(10, digits);

    // Remove first and last digit
    newNum = (num % (int)pow(10, digits)) / 10;

    // Form new number after swapping
    newNum = last * (int)pow(10, digits) + newNum * 10 + first;

    // Display result
    printf("%d\n", newNum);

    return 0;
}
