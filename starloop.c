#include<stdio.h>
#include<conio.h>

void main (){
    int i;
    int j;

    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    getch();
}