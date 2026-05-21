#include <stdio.h>
#include <stdbool.h>

int main(){
    int numbers[7] = {12, 3, 17, 7, 4, 11, 1};
    
    bool swapped;
    while(1){              // While loop should run 6 times in worst case i.e when array is reverse of sorted.
        swapped = false;
        for(int i = 0; i < 6; i++){
            if (numbers[i]>numbers[i+1]){
                numbers[i+1]=numbers[i]+numbers[i+1];
                numbers[i]=numbers[i+1]-numbers[i];
                numbers[i+1]=numbers[i+1]-numbers[i];

                swapped = true;
            }

        }
        if (swapped == false){
            break;
        }    
    }
    for(int k = 0; k<7 ;k++){
        printf("%d ", numbers[k]);
    }
    return 0;
}