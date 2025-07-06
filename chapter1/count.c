#include <stdio.h>

int main() {
    // int nc;
    // for (nc = 0; getchar() != EOF; ++nc) {
        ; // null statement
    // }
    int nc = 0;
    while (getchar() != EOF) {
        ++nc;
    }
    printf("Number characters: %d\n", nc);
    return 0;
}
