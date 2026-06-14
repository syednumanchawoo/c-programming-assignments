#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));          // Seed the random number generator with the current time
    int number = rand() % 100 + 1;      // Ensures that number is between 1 to 100
    int guess;

    printf("Guess the number between 1 to 100\n");
    while(1){
        printf("Enter the number: ");
        scanf("%d",&guess);
        if (guess==number){
            printf("You are right\n");
            break;

        }
        else{
            int difference = abs(number - guess);
            if (difference<20){
                printf("You are close\n");
            }
            else if (difference<60){
                printf("Not so close\n");
            }
            else{
                printf("Very far\n");
            }
            printf("Try again\n");
        }

    }
    
   
    return 0;
}