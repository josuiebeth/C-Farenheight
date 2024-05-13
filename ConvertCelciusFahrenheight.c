#include<stdio.h>

int main () {
    float celcius, fahrenheit;

    printf("Enter degree centigrade: ");
    scanf("%f" , &celcius);

    fahrenheit = (celcius * 9 /5) + 32;

    printf("Fahrenheit: %.2f°F\n", fahrenheit);
        return 0;


}
    