// Q22: Write a program to find profit or loss percentage given cost price and selling price.

#include <stdio.h>

int main() {
    float costPrice, sellingPrice, percentage;

    // Input cost price and selling price
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);

    // Calculate profit or loss
    if (sellingPrice > costPrice) {
        percentage = ((sellingPrice - costPrice) / costPrice) * 100;
        printf("Profit %.0f%%\n", percentage);
    } else if (sellingPrice < costPrice) {
        percentage = ((costPrice - sellingPrice) / costPrice) * 100;
        printf("Loss %.0f%%\n", percentage);
    } else {
        printf("No Profit No Loss\n");
    }

    return 0;
}
