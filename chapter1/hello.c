#include <stdio.h>

int main() {
    // printf("hello, world\t"); // backslash t for tab between current line and next line
    // printf("hello, world\b"); // backslash b for backspace
    // printf("hello, world\""); // backslash " add quote end word
    // printf("hello, world\\"); // backslash \ add backslash end word
    // printf("hello, world\n"); // bachslash n for a newline character
    printf("hello, world\c"); // display warning unknown escape sequence backslash c

    return 0;
}