#include<stdio.h>

int main (){
    char x[]="Hello";
    int py_len();
    printf("x %s %d\n",x,py_len);

}
int py_len(self)
char self[];
{
    int i;
    for(i=0;self[i];i++);
    return i;
}