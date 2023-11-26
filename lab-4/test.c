#include <stdio.h>

int main() {
    int arr1[] = {1, 4, 7, 5};
    int arr2[] = {6, 1, 3, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int new_arr[n1 + n2 - 1];
    for (int i = 0; i < n1 + n2 - 1; i++) {
        if (i < n1 - 1) {
            new_arr[i] = arr1[i];
        } else {
            new_arr[i] = arr2[i - n1 + 1];
        }
    }
    printf("[");
    for (int i = 0; i < n1 + n2 - 1; i++) {
        printf("%d", new_arr[i]);
        if (i != n1 + n2 - 2) {
            printf(", ");
        }
    }
    printf("]\n");
    return 0;
}
