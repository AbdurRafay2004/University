#include <stdio.h>
#include <string.h>

int main() {
    char arr[][20] = {"hey", "there", "", "what's", "", "up", "", "?"};
    int n = sizeof(arr) / sizeof(arr[0]);
    // printf("\n\n%d\n\n", n);
    char new_arr[n][20];
    int j = 0;

    printf("Original Array: [");

    for (int i = 0; i < n; i++)
        {
            printf("'%s'", arr[i]);
            if (i != n - 1) 
                {
                    printf(", ");
                }
            if (strcmp(arr[i], "") != 0) 
                {
                    strcpy(new_arr[j], arr[i]);
                    j++;
                }
        }

    printf("]\n");

    printf("Modified Array: [");
    for (int i = 0; i < j; i++) 
        {
            printf("'%s'", new_arr[i]);
            if (i != j - 1) 
                {
                    printf(", ");
                }
        }
    printf("]\n");

    return 0;
}
