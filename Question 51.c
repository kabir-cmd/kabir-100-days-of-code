/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */

#include <stdio.h>

int main() {
    int i, j, a;

    // Loop for rows
    for (i = 5; i >= 1; i--) {
        // Print leading spaces
        for (a = 1; a < i; a++) {
            printf(" ");
        }
        // Print numbers starting from i up to 5
        for (j = i; j <= 5; j++) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
