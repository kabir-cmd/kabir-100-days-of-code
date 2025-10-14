// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1) {
        isPrime = 0;
    } else {
        for(int i = 2; i*i <= num; i++) {  // check up to sqrt(num)
            if(num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Display result
    if(isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}
