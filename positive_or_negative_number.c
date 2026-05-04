#include<stdio.h>
int main(){
    int number;
    printf("Please enter the number: ");
    scanf("%d", &number);
    if (number>0){
        printf("The number %d is positive", number);
    }
    else{
        printf("The number %d is negative", number);
    }
    return 0;
}
