#include <stdio.h>
int main() {
    char g;
    int a;
    printf("Enter gender (M/F): ");
    scanf(" %c", &g); 
    printf("Enter age: ");
    scanf("%d", &a);
    printf("\nYou entered:\n");
    if(g == 'M' || g == 'm') {
        printf("Gender: Male\n");
    } else if(g == 'F' || g == 'f') {
        printf("Gender: Female\n");
    } else {
        printf("Gender: Unknown\n");
    }
    printf("Age: %d\n", a);
    return 0;
}
