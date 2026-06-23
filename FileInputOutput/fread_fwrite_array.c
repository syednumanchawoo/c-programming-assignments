#include <stdio.h>
void printArray(int a[], int size);

int main(){
    int arr[5] = {1,2,3,4,5};
    FILE *ptr;
    ptr = fopen("array.dat", "wb");
    fwrite(arr, sizeof(int), 5, ptr);
    fclose(ptr);

    int clone[5];
    ptr = fopen("array.dat", "rb");
    fread(clone, sizeof(int), 5, ptr);
    printArray(clone, 5);


    return 0;
}

void printArray(int a[], int size){
    

    for (int j = 0; j < size; j++){
        printf("%d ", a[j]);
    }
    
    printf("\n");
}