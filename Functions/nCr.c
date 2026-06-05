#include <stdio.h>
int nCr (int n, int r);

int factorial (int n);

int main(){
    int n, r, answer;
    
    printf("PROGRAM TO CALCULATE nCr\n");
    
    printf("Please enter n: ");
    scanf("%d", &n);

    printf("Please enter r: ");
    scanf("%d", &r);

    if (n<0 | r<0 | n<r){
        printf("Invalid Domain\n");
        return 0;
    }

    answer = nCr(n,r);
    printf("Value of %dC%d is %d", n,r,answer);
    return 0;
}

int nCr (int n, int r){
    int n_factorial, r_factorial, n_r_factorial, value;
    n_factorial = factorial(n);
    r_factorial = factorial(r);
    n_r_factorial = factorial(n-r);
    
    value= n_factorial/(r_factorial*n_r_factorial);
    return value;
}

int factorial (int n){
    int factorial=1, x=1;
        while (x<=n){
        factorial*=x;
        x+=1;
        }
    return factorial;
}