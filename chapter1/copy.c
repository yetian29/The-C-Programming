#include <stdio.h>

int main() {
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
    printf("%d\n", getchar() != EOF);
    printf("EOF: %d\n", EOF);
    return 0;
}