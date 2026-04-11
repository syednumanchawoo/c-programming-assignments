#include <stdio.h>

int main(){
    char operation;
    int num1, num2;
    printf("Please enter the operation you want to perform\n");
    printf("a for addition\n");
    printf("s for subtraction\n");
    printf("m for multiplication\n");
    printf("d for division\n");
    scanf("%c", &operation);

    printf("Please enter the first number: ");
    scanf("%d", &num1);
    printf("Please enter the second number: ");
    scanf("%d", &num2);

    if(operation == 'a'){
        printf("The result of addition is: %d\n", num1 + num2);
    }
    else if(operation == 's'){
        printf("The result of subtraction is: %d\n", num1 - num2);
    }
    else if(operation == 'm'){
        printf("The result of multiplication is: %d\n", num1 * num2);
    }
    else if(operation == 'd'){
        if(num2 != 0){
            printf("The result of division is: %.2f\n", (float)num1 / num2);
        }
        else{
            printf("Error: Division by zero is not allowed.\n");
        }
    }
    else{
        printf("Invalid operation selected.\n");
    }

    return 0;
}