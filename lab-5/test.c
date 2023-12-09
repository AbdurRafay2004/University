#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int i, j = 0;
    while (str[j]) {
        if (j % 2 != 0) {
            if (str[j] >= 'a' && str[j] <= 'z') {
                str[j] = str[j] - 32; // Convert to uppercase
            }
        } else {
            str[i++] = str[j];
        }
        j++;
    }
    str[i] = '\0'; // Null-terminate the resulting string

    printf("Resulting String: %s\n", str);

    return 0;
}
