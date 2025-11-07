#include <stdio.h>

void main() {
    int marks[5], i=0 ;
    float t = 0;
    float per;
    printf("Enter marks for 5 subjects:\n");
    for (; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        t += marks[i];
    }
    per=t/5;
    printf("\nTotal Marks = %.1f\n",t);
    printf("Percentage = %.2f%%\n", per);
}
