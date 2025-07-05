#include <stdio.h>

int main() {
    int nc;
    for (nc = 0; getchar() != EOF; ++nc) {
        ;
    }
    printf("Number characters: %d\n", nc);
    return 0;
}