#include <stdio.h>

int main() {
    int ch;
    float r, l, b, a;

    printf("Choose shape to calculate area:\n");
    printf("1. Circle\n2. Rectangle\n3. Square\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            printf("Enter radius: ");
            scanf("%f", &r);
            a= 3.14 * r * r;
            printf("Area of Circle = %.2f\n", a);
            break;
        case 2:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);
            a = l* b;
            printf("Area of Rectangle = %.2f\n", a);
            break;
        case 3:
            printf("Enter side length: ");
            scanf("%f", &l);
            a = l * l;
            printf("Area of Square = %.2f\n", a);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
