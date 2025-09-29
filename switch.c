#include<stdio.h>

int main(){
  
    int a,b;
    int option;
    char choice;
do{
    printf("\nEnter 1 for Additions");
    printf("\nEnter 2 for Subtraction");
    printf("\nEnter 3 for Multlipliaction");
    printf("\nEnter 4 for Division");

    printf("\nEnter the value of A: ");
    scanf("%d",&a);
    printf("\nEnter the value of B: ");
    scanf("%d",&b);

    printf("\nSelect the option between (1,2,3,4): ");
    scanf("%d",&option);

    switch(option){
        case 1:
            printf("\nAddition: %d",a+b);
            break;
        case 2:
            printf("\nSubstraction: %d",a-b);
            break;
        case 3: 
            printf("\nMultiplication: %d",a*b);
            break;
        case 4:
        if(b!=0){
                printf("\nDivision: %d",a/b);
            }
            else{
                 printf("\nError: Division by zero!");
            }
            break;
        default: 
            printf("\nInvalid Number");
            break;
    }
        printf("\nIf you want to try again then click(Y/y): ");
        scanf(" ;/.%c", &choice);
}while( choice =='y'|| choice =='Y' );

   return 0;

}