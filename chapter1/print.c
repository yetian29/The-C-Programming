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
