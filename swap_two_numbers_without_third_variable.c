#include <stdio.h>

int main(){
    int a = 5, b = 10;
    printf ("Before swap, a is %d and b is %d\n", a,b);
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: a is %d, b is %d\n", a, b);
    return 0;
}