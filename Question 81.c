// Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[1000];
    
    // Read string including spaces
    fgets(str, sizeof(str), stdin);

    int count = 0;
    
    // Count characters until null character
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);

    return 0;
}
