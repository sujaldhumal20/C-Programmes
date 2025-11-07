#include <stdio.h>

int main() {
    int h,i;

    printf("Enter the hour (0-23): ");
    scanf("%d", &h);
    i=h/6;

    switch(i) {
        case 0:
            printf("Good Night!\n");
            break;
        case 1:
            printf("Good Morning!\n");
            break;
        case 2:
            printf("Good Afternoon!\n");
            break;
        case 3:
            printf("Good Evening!\n");
            break;
        default:
            printf("Invalid hour!\n");
    }

    return 0;
}
