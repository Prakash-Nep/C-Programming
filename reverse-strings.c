#include <stdio.h>
#include <string.h>

void reverse(s)
char s[];
{
    int i, j, len;
    char temp;
    
    /* find length of string */
    for (len = 0; s[len] != '\0'; len++)
        ;
    
    /* swap characters from both ends moving inward */
    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

/* copy s1 to s2; assume s2 big enough */
char *copy(s1, s2)
char s1[], s2[];
{
    int i;
    for(i=0;(s2[i] = s1[i]);i++);
    return s2;
}

int main() {
    char t[1000];
    char *copy();
    void reverse();
    copy("Hello world", t);
    printf("%s\n", t);
    reverse(t);
    printf("%s\n", t);
    reverse(copy("XY", t));
    printf("%s\n", t);
    reverse(copy("Even", t));
    printf("%s\n", t);
    reverse(copy("Odd", t));
    printf("%s\n", t);
    reverse(copy("civic", t));
    printf("%s\n", t);
    return 0;
}


/*Output from your program:
Hello world
dlrow olleH
YX
nevE
ddO
civic*/