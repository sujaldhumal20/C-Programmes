#include<stdio.h>

void main(){
    char ch;
    printf("Enter symbols : ");
    scanf("%c",&ch);
    int i, j, s;
    printf("Enter no. of lines of %c :",ch);
    scanf("%d", &s);

    for(i=1; i<=s; i++){
        for(j=1; j<=s; j++){
            if(i==1 || i==s || j==1 || j==s){
                printf(" %c",ch);
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    

}
