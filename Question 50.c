/* Q50: Write a program to print the following pattern:
*****
  ****
    ***
      **
        *
*/

#include <stdio.h>

int main() {
    int i, j;

    // Print pattern
    for(i = 5; i >= 1; i--) {
        // Print leading spaces
        for(j = 5; j > i; j--) {
            printf("  "); // 2 spaces for indentation
        }
        // Print stars
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
