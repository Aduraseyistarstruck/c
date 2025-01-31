#include <stdio.h>
int main(){
    int ii, i, j;
    float xx,yy,x;
    printf("Wanna test output of percentagefloatpercentageintpercentagefloat. Enter \"12.3 45.6 768\": ");
    scanf ("%f%d%f", &xx, &ii, &yy);
    printf ("%f, %d, %f\n", xx, ii, yy);

    //test assignment
    printf("Wanna test output of percentageintpercentagefloatpercentageint. Enter \"10.3 5 6\": ");//% inside printf is for formatting
    scanf ("%d%f%d", &i, &x, &j);
    printf("%d, %f, %d\n",i,x,j);
/*when some inputs of scanf function are omitted because they are not assigned to a variable during the first call
of scanf, the inputs are passed on during the second call of scanf and they are used when they are assigned to a
variable in the second call, if not, the process continues like a loop.
This majorly happens to int variables */
}
