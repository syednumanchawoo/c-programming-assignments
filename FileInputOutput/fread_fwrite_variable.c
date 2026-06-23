#include <stdio.h>

int main(){
    int myAge = 21;
    FILE *fp;
    fp = fopen("data.bin", "wb");
    fwrite(&myAge, sizeof(int), 1, fp);
    fclose(fp);

    int readAge;
    FILE *readfp;
    readfp = fopen("data.bin", "rb");
    fread(&readAge, sizeof(int), 1, readfp);
    printf("%d", readAge);

    return 0;
}