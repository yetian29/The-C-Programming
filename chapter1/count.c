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
    //printf("Number character: %d\n", nc);

    /*Line counting*/
    int c, nl;
    nl = 0;
    while ((c = gechar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
    }
    printf("Number line: %d\n", nl);
    return 0;
}
