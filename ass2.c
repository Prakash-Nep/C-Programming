#include<stdio.h>
#include<conio.h>

void main (){

    int arr[4][4];
    int i,j;
    int max,min;

    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
        {
            printf("Entert the value of index(%d,%d): ",i,j);
            scanf("%d",&arr[i][j]);
        }   
    }
    printf("Output:\n");
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
        {
            printf("%d\t",arr[i][j]);
        }   
    }
    min=arr[0][0];
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
        {
            if (min>arr[i][j])
            {
              min=arr[i][j];
            }
            
        }   
    }
       
    max=arr[0][0];
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++)
        {
            if (max>arr[i][j])
            {
              max=arr[i][j];
            }
            
        }   
    }
    printf("Minimum:%d and Maximin:%d",min,max);
 getch();

}