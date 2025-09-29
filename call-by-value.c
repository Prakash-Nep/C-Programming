#include<stdio.h>

int main (){
    int mymult();
    int retvel;

    retvel=mymult(5,7);
    printf("Answer:%d",retvel);

}
int mymult(a,b)
int a,b;
{
    int c=a*b;
    return c;
}