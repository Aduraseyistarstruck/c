#include <stdio.h>
int main() {
    int number, sum;
    float average;
    int i = 0;
    while (i < 6) {
        printf("Enter the number at position %d: \n", i+1);
        scanf("%d",&number);
        sum += number;
        i++;
    }

    average = floor(sum)/6;

    printf("The average of the numbers is %f.\n",  average);
    return 0;
}
