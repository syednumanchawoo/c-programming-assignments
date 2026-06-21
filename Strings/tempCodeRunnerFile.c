#include <stdio.h>
#include <string.h>

void sliceString(char arr[],int m,int n);

int main(){
    char arr[50]= "Numan";
    sliceString(arr, 2, 7);
    printf("%s", arr);
    return 0;
}

void sliceString(char arr[],int m,int n){
    int i=0;
    for(; m<=n && arr[m] != '\0'; i++, m++){
        arr[i] = arr[m];
    }
    arr[i]= '\0';
}