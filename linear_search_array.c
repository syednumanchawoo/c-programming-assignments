#include <stdio.h>

int main(){
    int numbers[6] = {5, 2, 9, 1, 4, 6};
    int target = 4, index=-1;

    for(int i = 0; i < 6; i++){
        if (numbers[i] == target){
            index = i;
            break;
        }

    }
    if(index==-1){
        printf("Number not found");

    }
    else{
        printf("Number %d is found at index %d", target, index);
    }
    
    return 0;
}