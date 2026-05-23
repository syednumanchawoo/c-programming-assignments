/* Program to calculate exponentiation */
/* Author: Syed Numan, Date: 2026-05-23 */

#include <stdio.h>

int power(int base, int exponent);

int main(){
    int base, exponent;
    long int answer;
    printf("Enter the base: ");
    scanf("%d", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    answer = power(base, exponent);
    printf("Answer: %d\n", answer);

    return 0;
}

int power(int base, int exponent){
    long int answer = 1;
    
        for(int i=1; i<=exponent; i++){
        answer*=base;
    }
     
       
    return answer;
}