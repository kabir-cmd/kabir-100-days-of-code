// Q4: Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>
#define PI 3.14159   // Defining the value of π

int main() {
    float radius, area, circumference;

    // Input radius
    printf("Enter radius: ");
    scanf("%f", &radius);

    // Calculate area and circumference
    area = PI * radius * radius;
    circumference = 2 * PI * radius;

    // Display results (rounded to 2 decimal places)
    printf("Area=%.2f, Circumference=%.2f\n", area, circumference);

    return 0;
}
