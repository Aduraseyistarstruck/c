#include <stdio.h>
int main(void){
    int testvar = 400;
    int *testptr = &testvar;
    printf("testvar contains %i\n",*testptr);
    return 0;
}