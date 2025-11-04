#include<stdio.h>
int main() {
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
if ((ch>= 'a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z')){
    printf("It's a alphabet");
}
else if (ch>= 0 && ch<= 999){
    printf("It's a Number");
}
else {
    printf("It's a special character");
}
return 0;
}