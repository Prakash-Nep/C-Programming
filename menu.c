#include<stdio.h>
#include<conio.h>

void main (){
    int a,b,i,no;
    int option;
    char choice;
    do{
        printf("\nPress 1 for additon");
        printf("\nPress 2 for print odd numbers only");
        printf("\nPress 3 for checking the number is divided by 2");

        printf("\nEnter the option from (1,2,3): ");
        scanf("%d",&option);

      switch(option){
            case 1: 
                printf("\nEnter A : ");
                scanf("%d",&a);

                printf("\nEnter B : ");
                scanf("%d",&b);

                printf("\nAddition of A and B: %d",a+b);
            break;

            case 2: 
                printf("Odd Number:\n");
                for(i=1;i<=50;i++){
                    printf("%d\t",i);
                }
            break;

            case 3: 
                printf("\nEnter the number for check: ");
                scanf("%d",&no);

                if(no%2==0){
                    printf("\nDivisible by 2");
                }else{
                    printf("\nNot dividible by 2");
                }
            break;

            default:
                printf("\nInvalid Number");
                break;
        }  
        printf("\nIf yoy want to try again then click (y/Y): ");
        scanf(" %c",&choice);
    }while( choice=='y' || choice=='Y');
    getch();
}