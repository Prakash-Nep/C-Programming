#include<stdio.h>
#include<conio.h>

void main (){
  int i = 2;
  int no;
  int f=0;
  printf("Enter the number:  ");
  scanf("%d",&no);
  while(i<=no-1){
    if(no%2==0){
        f=1;
    }
    i++;
  }
  if(f==0){
    printf("Number is prime");
  }else{
    printf("No, Number is not prime");
  }
  getch();
}