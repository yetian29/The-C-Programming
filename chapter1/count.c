/*Write a program to count characters, blanks, tabs, newlines and word.*/
#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

int main() {
    int c, nc, nb, nt, nl, nw;
    nc = nb = nt = nl = nw =  0;
    state = OUT;
    while ((c = getchar()) != EOF) {
        ++nc;   
        if (c == ' ') {
            ++nb;
            state = OUT;
        }
        else if (c == '\t') {
            ++nt;
            state = OUT;    
        }
        else if (c == '\n') {
            ++nl;
            state = OUT;
        }
        else       
            if (state == OUT)
                ++nw;
            state = IN;

    }
    printf("Number characters: %d\nNumber blanks: %d\nNumber tabs:%d\nNumber lines:%d\n",nc, nb, nt, nl);
    return 0;
}
