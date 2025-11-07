#include <stdio.h>

void main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n > 0) {
        if (n == 0) {
            printf("The number is zero.\n");
        } else {
            printf("The number is positive.\n");
            if (n % 2 == 0) {
                printf("It is even.\n");
            } else {
                printf("It is odd.\n");
            }
        }
        printf("\nEnter another integer (0 or negative to stop): ");
        scanf("%d", &n);
    }
    printf("The number is negative or zero. Exiting loop.\n");
}
