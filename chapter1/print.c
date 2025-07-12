/* Write a program that prints its input one word per line. */

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

/*
Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; 
a vertical orientation is more challenging.
*/
#include <stdio.h>
#define OUT 0 /* outside a word */
#define IN 1 /* inside a word */

int main() {
  int c, length, state, i, nword; /* nword abbreviation numberword */
  length = i = nword = 0;
  state = OUT;
  int lword[100]; /* lword abbreviation lengthword */
  for (i = 0; i < 100; ++i) {
      lword[i] = 0;
  }
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
        if (state == IN) {
            ++nword;
            lword[i] = length; 
            ++i;
        }
        state = OUT;      
        length = 0;     
    }
    else {
        state = IN;
        ++length;   
    }
    putchar(c);
    
  }
  for (i = 0; i < nword; ++i) {
      printf("Word%d length: **%d\n", i + 1, lword[i]);
  }
  return 0;
}


/* Write  a program print longest line */
#include <stdio.h>

void copy(char destination, char source);

int main() {
    char longest[];
    int c, nc, max, line;
    nc = max = line = 0; 
  
    while ((c == getchar()) != EOF) {
        if (c != ' ' && c != '\t' && c != '\n') {
            ++nc;
            copy(longest, c);
        }
        else if (c == '\n' && nc > max) {
            max = nc;
            ++line;
            nc = 0;
        }
              
    }
  
      printf("%s\n", longest);
  return 0;
}

void copy(char destination[], char source) {
  
}
