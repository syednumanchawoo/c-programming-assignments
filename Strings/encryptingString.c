/*
We will add 1 to ASCII 
values to encrypt our string
*/

#include <stdio.h>

void encryptString(char string[]);

int main(){
    char name[20] = "Numan";
    encryptString(name);
    printf("%s", name);
    return 0;
}

void encryptString(char string[]){
    for(int i=0; string[i]!='\0'; i++){
        string[i] += 1;
    }
}