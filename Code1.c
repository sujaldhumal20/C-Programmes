#include <stdio.h>

void main() {
    int r;
    printf("Number\tSquare\n");
    printf("----------------\n");
    printf("\nEnter how many no. of square you want : ");
    scanf("%d",&r);
    for (int i = 1; i <= r; i++) {
        printf("%d\t%d\n", i, (i * i));
    }
}