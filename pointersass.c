#include <stdio.h>
int main(void){
    int testvar = 26;
    int *ptestvar = &testvar;
    printf("Address of testvar = %i\n",ptestvar);
    return 0;
}