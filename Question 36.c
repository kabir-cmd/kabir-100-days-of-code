// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int a, b, tempA, tempB, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Use Euclidean algorithm
    tempA = a;
    tempB = b;
    while(tempB != 0) {
        int temp = tempB;
        tempB = tempA % tempB;
        tempA = temp;
    }
    hcf = tempA;

    // Display result
    printf("%d\n", hcf);

    return 0;
}
