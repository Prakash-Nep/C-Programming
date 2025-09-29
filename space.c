/*K&R Exercise 1-10*/
/*This will be provided as input to your program: Copy


But soft what light
through yonder window
breaks
OUTPUT MATCH - Grade sent to server

Output from your program:
But
soft
what
light
through
yonder
window
breaks*/
#include <stdio.h>

int main() {
    int c;
    int in_word = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            if (in_word) {
                putchar('\n');
                in_word = 0;
            }
        } else {
            putchar(c);
            in_word = 1;
        }
    }
    
    if (in_word) {
        putchar('\n');
    }
    
    return 0;
}