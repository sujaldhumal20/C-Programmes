#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter two numbers:");
    scanf("%d %d", &num1, &num2);
    if ( num1>num2 ){
        printf("First is Greatest");
    }else{
        printf("Second is Greatest");
    }
    return 0;
}