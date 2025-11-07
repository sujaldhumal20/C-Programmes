#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive number (0 or negative to exit): ");
    scanf("%d", &n);
    while (n > 0) {
        if (n % 3 == 0 && n % 5 == 0) {
            printf("%d is a multiple of both 3 and 5.\n", n);
        } else if (n % 3 == 0) {
            printf("%d is a multiple of 3.\n", n);
        } else if (n % 5 == 0) {
            printf("%d is a multiple of 5.\n", n);
        } else {
            printf("%d is not a multiple of 3 or 5.\n", n);
        }
        printf("\nEnter another positive number (0 or negative to exit): ");
        scanf("%d", &n);
    }
    printf("Loop ended. You entered zero or a negative number.\n");
    return 0;
}
