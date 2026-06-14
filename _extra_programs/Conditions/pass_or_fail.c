/* 
Write a program to determine whether a student has passed or failed. To pass, a 
student requires a total of 40% and at least 33% in each subject. Assume there 
are three subjects and take the marks as input from the user. 
*/

#include<stdio.h>
int main() {
    int sub1, sub2, sub3, total_percent;
    printf("Enter marks of subject 1: ");
    scanf("%d", &sub1);
    printf("Enter marks of subject 2: ");
    scanf("%d", &sub2);
    printf("Enter marks of subject 3: ");
    scanf("%d", &sub3);

    total_percent = (sub1 + sub2 + sub3) / 3;

    printf("Total Percentage: %d%%\n", total_percent);
    if (total_percent>=40 && sub1>=33 && sub2>=33 && sub3>=33) {
        printf("Congratulations! You have passed.\n");
    } else {
        printf("Sorry! You have failed.\n");
    }
    return 0;
}