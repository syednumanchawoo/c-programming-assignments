#include <stdio.h>

void stringCopy(char destination[], const char source[]);

int main(){
    char source[20] = "Numan", destination[20];
    stringCopy(destination,source);
    printf("%s", destination);
    return 0;
}

void stringCopy(char destination[], const char source[]){
    int i = 0;
    for(; source[i]!='\0'; i++){
        destination[i] = source[i];
    }
    destination[i]='\0';
}