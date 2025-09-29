#include<stdio.h>

int main(){
    char x[10];
    int i;
    for(i=0;i<20;i++){
        x[i]='*';
        printf("%s\n",x);
    }
}