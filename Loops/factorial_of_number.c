#include<stdio.h>
int main(){
    int number, factorial=1, x=1;
    printf("Please enter the  number: ");
    scanf("%d", &number);
    while (x<=number){
        factorial*=x;
        x+=1;
        }
    printf("The Factorial of %d is %d",number,factorial);
    return 0;



    }
