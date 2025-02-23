#include <stdio.h>
#include <stdlib.h>
int main(){
    int *temps;
    temps = (int *) malloc(10 * sizeof(int));
    for (int i = 0; i<10; i++) {//ensure size of temps you use corresponds with the one you define
        temps[i] = i;
        printf("%d ",temps[i]);
    }
    free(temps);
    return 0;
    
}