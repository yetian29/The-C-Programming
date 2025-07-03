#include <stdio.h>

int main() {
    /*print fahrenheit-celsious table
    for fahrenhrit = 0, 20, ..., 300
    */
    // int celsius, fahrenheit;
    float celsius;
    int fahrenheit, lower, upper, step;
    lower = 0;
    upper = 300;
    step = 20;
    fahrenheit = lower;
    printf("fahrenheit\tcelsius\n");
    while (fahrenheit <= upper) {
        celsius = 5.0 * (fahrenheit - 32) / 9;
        // printf("%3d\t\t%3d\n", fahrenheit, celsius);
        printf("%3d\t\t%6.1f\n", fahrenheit, celsius);
        fahrenheit = fahrenheit + step;
    }
    return 0;
}


