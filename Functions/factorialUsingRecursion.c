#include <stdio.h>

int factorial(int number);

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("Factorial of %d is %d", number, factorial(number));
    return 0;
}

int factorial(int number){
    int value;
    if (number==0 || number==1){
        return 1;
    }
    
    value = number * factorial(number-1);
    return value;

}