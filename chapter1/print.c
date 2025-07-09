/* Write a program that prints its input one word per line. */
/*
#include <stdio.h>
#define OUT 0 /* outside word */
#define IN 1 /* inside word */

int main() {
  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
        if (state == IN)
            putchat('\n');      
        state = OUT;
    }
    else { 
        state = IN;
        putchar(c);
    }       
  }
  return 0;
}
*/
/*
Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging.
*/
