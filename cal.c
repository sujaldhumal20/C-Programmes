#include<stdio.h>
#include<conio.h>/
int main(){
    char ch;
    int r,num1,num2 ;
    printf("Enter Oprater :\n");
    printf("1. Add (+) :\n");
    printf("2. Minus (-) :\n");
    printf("3. Multiplication (*) :\n");
    printf("4. Division (/) :\n");
    scanf("%c",&ch);
    printf("Enter 2 number's : ");
    scanf("%d %d",&num1,&num2);
        switch(ch)
        {
            case'+':
            printf("%d + %d = %d ",num1,num2,(num1+num2));
            break;

            case'-':
            printf("%d - %d = %d ",num1,num2,(num1-num2));
            break;

            case'*':
            printf("%d * %d = %d ",num1,num2,(num1*num2));
            break;

            case'/':
            printf("%d / %d = %d ",num1,num2,(num1/num2));
            break;

            default:
            printf("Invalid oprater ");

        }
    return 0;
}