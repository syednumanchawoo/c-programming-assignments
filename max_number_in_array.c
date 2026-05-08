#include <stdio.h>

int main(){
    int numbers[]={23,12,55,34,17};
    int maximum = numbers[0];

    for(int i = 1; i<= 4; i++){
        if (numbers[i] > maximum){
            maximum = numbers[i];
        }
    }
    printf("%d", maximum);
    return 0;
}