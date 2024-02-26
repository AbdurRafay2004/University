#include <stdio.h>

int main() {
    char name[100];
    int num, i;

    printf("Enter car name: ");
    scanf("%s", &name);

    printf("Enter the number of times to print the name: ");
    scanf("%d", &num);

    i = 1;
    while ( i <= num) 
        {
            printf("%s\n", name);
            i++;
        }

    return 0;
}
