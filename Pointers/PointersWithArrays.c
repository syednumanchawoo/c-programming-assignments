#include <stdio.h>

int main(){
    int arr[5]={1,2,3,4,5};

    int *arrptr = &arr;

    printf("%d", *arrptr+1);
    return 0;
}