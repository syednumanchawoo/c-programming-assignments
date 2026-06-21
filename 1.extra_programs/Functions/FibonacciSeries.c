/*To calculate nth element of Fibonacci Series using recursion*/

#include <stdio.h>
int fibonacciSeries(int n);

int main(){
    int n;
    printf("Which term of Fibonacci Series you want to print? ");
    scanf("%d", &n);
    printf("The %d term is %d", n, fibonacciSeries(n));
    return 0;
}

int fibonacciSeries(int n){
    int value;
    if (n<=1){
        return 0;
    }
    else if(n==2){
        return 1;
    }
    value = fibonacciSeries(n-2)+fibonacciSeries(n-1);
    return value;

}