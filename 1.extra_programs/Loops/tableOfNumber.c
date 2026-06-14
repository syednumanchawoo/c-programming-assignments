#include <stdio.h>

int main(){
    int number;
    printf("Table of any number.\nPlease enter a number: ");
    scanf("%d", &number);

    for(int i=1; i<11; i++){
        printf("%d X %d = %d\n", number, i, number*i);
    }
    return 0;
}