#include <stdio.h>
#include <string.h>

void printArray(int a[], int size);

typedef struct{
    int id;
    char name[20];
} profile;

int main(){
    profile uni[10];
    uni[0].id = 46;
    strcpy(uni[0].name, "Syed Numan");
    uni[1].id = 41;
    strcpy(uni[1].name, "ABC");

    int activeProfiles = 2;

    FILE *ptr;
    ptr = fopen("profiles.dat", "wb");

    fwrite(&activeProfiles, sizeof(int), 1, ptr);
    fwrite(uni, sizeof(profile), activeProfiles, ptr);
    fclose(ptr);

    ptr = fopen("profiles.dat", "rb");
    int pro;
    fread(&pro, sizeof(int), 1, ptr);
    profile arr[10];
    fread(arr, sizeof(profile), pro, ptr);
    fclose(ptr);

    printf("%s", arr[0].name);
    return 0;
}

void printArray(int a[], int size){
    

    for (int j = 0; j < size; j++){
        printf("%d ", a[j]);
    }
    
    printf("\n");
}