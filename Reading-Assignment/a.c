#include <stdio.h>

int main (void){
    float celsius, fahrenheit;

    printf("Enter the Celsius value that you want to convert.");
    scanf("%f", celsius);

    fahrenheit = (1.8 * celsius) + 32;

    printf("Your Fahrenheit value is: %f", fahrenheit);
    return 0;
}