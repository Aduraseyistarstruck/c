#include <stdio.h>
int main() {
    int grade;
    printf("Enter the student grade: ");
    scanf("%d",&grade);

    if (grade >= 70) {
        printf("A");
    }
    else if (grade >= 60) {
        printf("B");
    }
    else if (grade >= 50) {
        printf("C");
    }
    else if (grade >= 40) {
        printf("D");
    }
    else if (grade >= 35) {
        printf("E");
    }
    else {
        printf("F");
    }
    return 0;
}
