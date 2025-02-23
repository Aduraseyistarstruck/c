#include <stdio.h>
int main() {
    int firstnum, secondnum;
    float answer;
    printf("Enter the first number: \n");
    scanf("%d",&firstnum);
    printf("Enter the second number: \n");
    scanf("%d",&secondnum);

    if (secondnum == 0) {
        printf("Error! Zero division error in %d/%d.\n",  firstnum, secondnum);
    }
    else {
        answer = floor(firstnum) / secondnum;
        printf("Division of %d/%d to 3 decimal places is: %.3f\n",  firstnum,secondnum,answer);
    }
    return 0;
}
