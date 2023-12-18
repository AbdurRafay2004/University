#include <stdio.h>

void count_upper_lower(char *str) {
    int upper = 0, lower = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper++;
        } else if (str[i] >= 'a' && str[i] <= 'z') {
            lower++;
        }
    }
    printf("The number of uppercase letters is **%d** and the number of lowercase letters is **%d**.", upper, lower);
}
int main()
{
    char name[100];
    gets(name);

    count_upper_lower(name);

}

// #include <stdio.h>

// int main() {
//     int arr[5] = {2,5,7,9,16};
//     int *ptr = arr;

//     for (int i = 0; i < 5; i++) {
//         printf("The value of arr[%d] is **%d**\n", i, *(ptr + i));
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int x = 10, y=20;
//   int *ptr;
  
//   ptr = &x;
//   printf("x = %d\n", *ptr);
//   ptr = &y;
//   printf("y = %d\n", *ptr);

//   printf("x = %d\n", *ptr);
// }