#include <stdio.h>

int positiveIntegers(int arr[], int size);

int main(){
    int arr[5]= {1,2,-3,4,5};
    printf("%d", positiveIntegers(arr, 5));
    
    return 0;
}

int positiveIntegers(int arr[], int size){
    int positive = 0;

    for (int i=0; i<size; i++){
        if (arr[i]>0){
            positive+=1;
        }
    }
    return positive;
}