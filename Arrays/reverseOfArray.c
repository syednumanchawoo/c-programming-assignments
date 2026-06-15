#include <stdio.h>

void reverseOfArray(int sizeOfArray, int *arr);
void printArray(int a[], int size);
int main(){
    int array[7] = {1,2,3,4,5,6,7};
    printArray(array, 7);
    reverseOfArray(7, &array);
    printArray(array, 7);

    return 0;
}

void reverseOfArray(int sizeOfArray, int *arr){
    for(int i = 0; i< sizeOfArray/2; i++){
        *(arr+i)=*(arr+i)+ *(arr+sizeOfArray-i-1);
        *(arr+sizeOfArray-i-1)= *(arr+i) - *(arr+sizeOfArray-i-1);
        *(arr+i)= *(arr+i) - *(arr+sizeOfArray-i-1);

    }
}
void printArray(int a[], int size){
    

    for (int j = 0; j < size; j++){
        printf("%d ", a[j]);
    }
    
    printf("\n");
}