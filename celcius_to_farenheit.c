#include <stdio.h>

int main(){
    float celcius, farenheit;
    printf("Please enter the temperature in celcius: ");
    scanf("%f", &celcius);
    farenheit = (celcius * 9/5) + 32;
    printf("%.2f celcius is equal to %.2f farenheit", celcius, farenheit);
    return 0;
}