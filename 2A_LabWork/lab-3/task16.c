#include <stdio.h>

int main() {
    int count, number, max, min, sum = 0;
    float average;
    printf("Enter the number of integers: ");
    scanf("%d", &count);
    printf("Enter %d integers: ", count);
    scanf("%d", &number);
    max = number;
    min = number;
    sum += number;
    for (int i = 1; i < count; i++) {
        scanf("%d", &number);
        sum += number;
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }
    }
    average = (float)sum / count;
    printf("Maximum %d\n", max);
    printf("Minimum %d\n", min);
    printf("Average is %.1f\n", average);
    return 0;
}
