/* Program to calculate exponentiation */
/* Author: Syed Numan, Date: 2026-05-23 */

#include <stdio.h>

double power(float base, int exponent);

int main(){
    int exponent;
    float base;
    double answer;
    printf("Enter the base: ");
    scanf("%f", &base);
    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    answer = power(base, exponent);
    printf("Answer: %lf\n", answer);

    return 0;
}

double power(float base, int exponent){
    int negativeExponent = 0;
    double answer = 1;
    if (exponent<0){
        exponent = -exponent;
        negativeExponent = 1;
    }
        for(int i=1; i<=exponent; i++){
        answer*=base;
    }
     
    if (negativeExponent==1) {
        answer = 1/answer;
    }  
    return answer;
}