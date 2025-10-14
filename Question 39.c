// Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, product = 1;
    int hasOdd = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find product of odd digits
    while(num != 0) {
        int digit = num % 10;
        if(digit % 2 != 0) {
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    // If no odd digits, product = 1
    if(!hasOdd)
        product = 1;

    // Display result
    printf("%d\n", product);

    return 0;
}
