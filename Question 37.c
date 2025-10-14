// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    int a, b, max, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Start from the maximum of a and b
    max = (a > b) ? a : b;

    while(1) {
        if(max % a == 0 && max % b == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    // Display result
    printf("%d\n", lcm);

    return 0;
}
