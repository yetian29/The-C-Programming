/*
Write a program to copy its input to its output, 
replacing each string of one or 
more blanks by a single blank 
*/
#include <stdio.h>
int main() {
    int c, nb;
    nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        else 
            nb = 0;
        if (nb > 1)
            continue;
        putchar(c);
    }
    
    return 0;
 }
