#include <stdio.h>

int main(){
    int series[10];
    series[0]=0;
    series[1]=1;
    for(int i=2; i<10; i++){
        series[i]=series[i-2]+series[i-1];
    }

    for(int k = 0; k<10 ;k++){
        printf("%d ", series[k]);
    }
    return 0;
}