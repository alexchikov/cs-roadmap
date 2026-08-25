#include <stdio.h>

int main(int argc, char** argv[]) {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = celsius * (9.0 / 5.0) + 32.0;
        printf("%7.0f\t%10.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return 0;
}