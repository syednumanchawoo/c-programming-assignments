#include <stdio.h>

int main(){
    char operation;
    float num1, num2, result;
    printf("Enter an operation (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operation){
        case '+':
            result = num1 + num2;
            printf("Result: %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f", result);
            break;
        case '/':
            if(num2 != 0){
                result = num1 / num2;
                printf("Result: %.2f", result);
            } else {
                printf("Error: Division by zero is not allowed.");
            }
            break;
        default:
            printf("Invalid operation.");
    }
    return 0;
}