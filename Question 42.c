// Q42: Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Sum of proper divisors
    for(int i = 1; i <= num / 2; i++) {
        if(num % i == 0)
            sum += i;
    }

    // Check perfect number
    if(sum == num)
        printf("Perfect number\n");
    else
        printf("Not perfect number\n");

    return 0;
}
