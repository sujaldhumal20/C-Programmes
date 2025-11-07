#include<stdio.h>
int main() {
    int num1, num2, num3;
    printf("Enter three numbers:");
    scanf("%d %d %d", &num1, &num2, &num3);
    if ( num1>num2 && num1>num3){
        printf("First is Greatest");
    }else if( num2>num1 && num2>num3  ){
        printf("Second is Greatest");
    }else{
    printf("Third is Greatest");
    }
    return 0;
}
