#include <stdio.h>

int main(){
    int size;
    printf("Enter the size of integer array: ");
    scanf("%d", &size);
    
    int numbers[size];

    for (int i = 0; i < size; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for (int j = 0; j < size; j++){
        printf("%d ", numbers[j]);
    }
    
    printf("\n");

    return 0;
}