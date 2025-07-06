#include <stdio.h>

int main() {
    /* Character counting */
    // int nc;
    // for (nc = 0; getchar() != EOF; ++nc) {
        ; // null statement
    // }
    // int nc = 0;
    // while (getchar() != EOF) {
        // ++nc;
    // }
    //printf("Number characters: %d\n", nc);

    /*Line counting*/
    int c, nb, nt, nl;
    nb, nt, nl = 0;
    while ((c = getchar()) != EOF) {
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
    
    printf("Number blanks: %d\nNumber tabs: %d\nNumber line: %d\n", nb, nt, nl);
    return 0;
}
