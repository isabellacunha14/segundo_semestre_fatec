#include <stdio.h>

int main() {
    float celsius;
    int fahrenheit;

    printf("Fahrenheit\tCelsius\n");

    for (fahrenheit = 0; fahrenheit <= 100; fahrenheit++) {
        celsius = (fahrenheit - 32) / 1.8;
        printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}
