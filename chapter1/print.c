#include <stdio.h>
#define OUT 0 /* outside word */
#define IN 1 /* inside word */

int main() {
  int c, state;
  state = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n')
        state = OUT;
    else { 
        putchar(c);
        if (state == OUT)
            printf('\n');
        state = IN;
    }       
    
  }
  return 0;
}
