#include<stdio.h>
int main() {
    int ch;
    printf("Enter an month no. : ");
    scanf("%d", &ch);
    if(ch==1 || ch==3 || ch==5 || ch==7 || ch==8 || ch==10 || ch==12 ){
        printf("The month no. has 31 days ");
    }else if(ch==4 || ch==6 || ch==9 || ch==11){
        printf("The month no. has 30 days ");
    }else{
        printf("The month no. has 28 OR 29 days");
    }
    return 0;
}       