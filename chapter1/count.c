#include <stdio.h>

int main() {
    /* Characters, blanks, tabs, lines, counting */ 
    int c, nc, nb, nt, nl;
    nc = nb = nt = nl = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if (c == ' ') {
            ++nb;
        }
        else if (c == '\t') {
            ++nt;
        }
        else if (c == '\n') {
            ++nl;
        }
        
    }
    
    printf("Number characters: %d\nNumber blanks: %d\nNumber tabs: %d\nNumber line: %d\n", nc,  nb, nt, nl);
    return 0;
}
