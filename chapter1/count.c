#include <stdio.h>

int main() {
    int nc;
    for (nc = 0; getchar() != EOF; ++nc) {
        ; // null statement
    }
    printf("Number characters: %d\n", nc);
    return 0;
}
