#include <stdio.h>

int main(){
    int principal, years, rate;
    float interest;
    printf("Enter the principal amount: ");
    scanf("%d", &principal);
    printf("Enter the number of years: ");
    scanf("%d", &years);
    printf("Enter the rate of interest: ");
    scanf("%d", &rate);
    interest = (principal * years * rate) / 100.0;
    printf("The simple interest is %.2f", interest);
    return 0;
}