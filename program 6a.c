#include <stdio.h>
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    if (number == 0) {
        printf("Sign: 0\n");
    }
    else if (number < 0) {
        printf("Sign: -1\n");
    }
    else {
        printf("Sign: +1\n");
    }
    return 0;
}
