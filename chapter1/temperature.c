#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;
    printf("Farenheit\tCelcius\n");
    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit = fahrenheit + 20) {
        celsius = (5.0 / 9.0) * (fahrenheit- 32.0);
        printf("%3d\t\t\t%6.1f\n", fahrenheit, celsius);
    }
    return 0;
}