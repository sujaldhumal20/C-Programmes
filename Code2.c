#include <stdio.h>

void main() {
    int i=1,num,j=1;
    printf("Enter how many no. you want to save :");
    scanf("%d",&num);
    int arr[num];
    printf("Enter integers:");
    for (i; i <= num; i++) {
        j++;
        scanf("%d", &arr[i]);
    }

    printf("Reversed array:\n");
    for (i=(j-1); i > 0; i--) {
        printf("%d ", arr[i]);
    }
}
