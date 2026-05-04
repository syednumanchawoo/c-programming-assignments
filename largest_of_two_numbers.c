#include <stdio.h>

int main(){
    int number1, number2;
    printf("Enter the first number: ");
    scanf("%d", &number1);
    printf("Enter the second number: ");
    scanf("%d", &number2);
    
    if(number1 > number2){
        printf("Number %d is greater.\n",number1);
    }
    else{
        printf("Number %d is greater.\n",number2);
    }
    return 0;
}