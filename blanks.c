/*K&R Exercise 1-7. Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank.*/
/*his will be provided as input to your program: Copy


But soft  what light     through yonder window breaks
It is    the east and  Juliet is the sun
Arise fair sun   and kill the envious moon
Who  is  already  sick  and  pale  with  grief
OUTPUT MATCH - Grade sent to server

Output from your program:
But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief*/
#include <stdio.h>

int main() {
    int c;
    int prev_blank = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (!prev_blank) {
                putchar(c);
                prev_blank = 1;
            }
        } else {
            putchar(c);
            prev_blank = 0;
        }
    }
    
    return 0;
}