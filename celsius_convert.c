/*
NAME:ANDLIANE KARANJA
REG NO:CT100/G/26193/25
Description: Convert fahrenheit to celcius
*/
#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}

int main() {
    float fahrenheit;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    float celsius = convertToCelsius(fahrenheit);
    printf("%.1f°F = %.1f°C\n", fahrenheit, celsius);
    
    return 0;
}
 