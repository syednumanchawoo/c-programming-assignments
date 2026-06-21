#include <stdio.h>

int countCharacter (char character, const char arr[]);

int main(){
    char name[] = "Numan";
    printf("%d\n", countCharacter('u', name));
    return 0;
}

int countCharacter (char character, const char arr[]){
    int count = 0, i=0;
    while(arr[i]!='\0'){
        if (arr[i] == character){
            count++;
        }
        i++;
    }
    return count;
}