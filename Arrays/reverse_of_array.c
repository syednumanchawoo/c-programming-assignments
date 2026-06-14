#include <stdio.h>

int main(){
    int numbers[6] = {1,2,3,4,5,6};

    for(int i = 0; i<3; i++){
        numbers[i] = numbers[i] + numbers[5-i];
        numbers[5-i] = numbers[i] - numbers[5-i];
        numbers[i] = numbers[i] - numbers[5-i];

    } 

    printf("[");
    for(int k=0; k<6; k++){
        printf("%d", numbers[k]);
        if (k<5){
            printf(",");
        }
    }
    printf("]");
    return 0;
}