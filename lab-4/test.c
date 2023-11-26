#include <stdio.h>

int main() {
    int array_one[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int array_two[] = {10, 11, 12, -13, -14, -15, -16};
    int n1 = sizeof(array_one) / sizeof(array_one[0]);
    int n2 = sizeof(array_two) / sizeof(array_two[0]);

    int new_arr[n1 + n2];

    int j = 0;
    
    printf("[");
    for (int i = 0; i < n1; i++) {
        if (array_one[i] % 2 == 0) {
            new_arr[j] = array_one[i];
            j++;
            printf("%d", array_one[i]);
            if (j != n1 + n2) {
                printf(", ");
            }
        }
    }
    for (int i = 0; i < n2; i++) {
        if (array_two[i] % 2 == 0) {
            new_arr[j] = array_two[i];
            j++;
            printf("%d", array_two[i]);
            if (j != n1 + n2) {
                printf(", ");
            }
        }
    }
    printf("]\n");
    return 0;
}
