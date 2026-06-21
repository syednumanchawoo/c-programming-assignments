#include <stdio.h>
#include <string.h>

void sliceString(char arr[],int m,int n);

int main(){
    char arr[50]= "Numan";
    sliceString(arr, 2, 4);
    printf("%s", arr);
    return 0;
}

void sliceString(char arr[],int m,int n){
    char temp[50];
    strcpy( temp, arr);
    int i=0;
    for(; m<=n; i++, m++){
        arr[i] = temp[m];
    }
    arr[i]= '\0';
}