#include <stdio.h>

void printingArray(int rows, int columns, int arr[rows][columns]);

int main(){
    int rows, columns;
    printf("Please enter the size for 2D array: ");
    scanf("%d %d", &rows, &columns);
    int arr[rows][columns];

    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("Please enter [%d][%d] element: ",i,j);
            scanf("%d", &arr[i][j]);
        }
    }
    printingArray(rows, columns, arr);
    return 0;
}

void printingArray(int rows, int columns, int arr[rows][columns]){
    for (int i=0; i<rows; i++){
        for (int j=0; j<columns; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}