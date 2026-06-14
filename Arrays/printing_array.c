#include <stdio.h>

void printArray(int a[], int size);

int main(){
    int size;
    printf("Enter the size of integer array: ");
    scanf("%d", &size);
    
    int numbers[size];

    for (int i = 0; i < size; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &numbers[i]);
    }

    printArray(numbers,size);
    

    return 0;
}

void printArray(int a[], int size){
    

    for (int j = 0; j < size; j++){
        printf("%d ", a[j]);
    }
    
    printf("\n");
}