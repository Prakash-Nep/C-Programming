#include <stdio.h>

/*This will be provided as input to your program: Copy


But soft what light through yonder window breaks
It is the east and Juliet is the sun
Arise fair sun and kill the envious moon
Who is already sick and pale with grief*/
int main() {
    int c;
    int blanks = 0;
    int newlines = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blanks++;
        } else if (c == '\n') {
            newlines++;
        }
    }
    
    printf("%d %d\n", blanks, newlines);
    return 0;
}
/*Output from your program:
29 4*/