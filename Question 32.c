// Q32: Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, original, reversed = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    // Check palindrome
    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
