// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[26] = {0};
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        int index = str[i] - 'a';
        freq[index]++;
        if (freq[index] == 2) {
            printf("%c", str[i]);
            return 0;
        }
    }

    printf("-1"); // if no repeating character found
    return 0;
}
