#include <stdio.h>
int main() {
    char a;
    printf("Enter an alphabet: ");
    scanf("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
        printf("It's an alphabet.\n");
    else
        printf("It's not an alphabet.\n");

    return 0;
}
