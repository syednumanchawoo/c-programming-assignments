#include <stdio.h>

int stringLength(const char arr[]);

int main(){
    char arr[30] = "Numan";
    printf("%d\n", stringLength(arr));
    return 0;
}

int stringLength(const char arr[]){
    int  length=0;
    while(arr[length]!= '\0'){
        length++;
    }
    return length;
}
