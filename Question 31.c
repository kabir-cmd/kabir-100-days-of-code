// Q31: Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int num;
    int binary[32]; // Array to store binary digits
    int i = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle zero case
    if(num == 0) {
        printf("0\n");
        return 0;
    }

    // Convert to binary
    while(num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    // Print binary in reverse order
    for(int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
