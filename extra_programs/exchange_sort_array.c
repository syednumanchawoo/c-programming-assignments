#include <stdio.h>

int main(){
    int numbers[7]={12, 3, 17, 7, 4, 11, 1};

    for(int i = 0; i<6 ;i++){
        for(int j = i + 1; j<7 ; j++){
            if (numbers[i]>numbers[j]){
                numbers[j]=numbers[i]+numbers[j];
                numbers[i]=numbers[j]-numbers[i];
                numbers[j]=numbers[j]-numbers[i];
            }

        }
    }

    for(int k = 0; k<7 ;k++){
        printf("%d ", numbers[k]);
    }

    return 0;
}