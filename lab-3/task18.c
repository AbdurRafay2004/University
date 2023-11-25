#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the height of the rectangle: ");
    scanf("%d", &m);
    printf("Enter the length of the rectangle: ");
    scanf("%d", &n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", j+1);
        }
        printf("\n");
    }
    return 0;
}
