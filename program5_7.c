#include <stdio.h>
int main() {
    int firstnum, secondnum;
    printf("Enter the first number: \n");
    scanf("%d",&firstnum);
    printf("Enter the second number: \n");
    scanf("%d",&secondnum);
    if (firstnum % secondnum == 0) {
        printf("%d is divisible by %d.\n",  firstnum,secondnum);
    }
    else {
        printf("%d is not divisible by %d.\n",  firstnum,secondnum);
    }
    return 0;
}
