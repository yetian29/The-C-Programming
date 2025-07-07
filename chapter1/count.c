#include <stdio.h>

int main() {
    int c, nb, nt, nl;
    nb = nt = nl = 0;
    while (c = getchar() != EOF) {
        if (c == ' ')
            ++nb;
        else if (c == '\t')
            ++nb;
        else if (c == '\n')
            ++nl;
    }
    printf("Number blanks: %d\nNumber tabs:%d\nNumber lines:%d\n", nb, nt, nl);
    return 0;
}