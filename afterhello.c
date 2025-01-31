#include <stdio.h>
int main(){
    int age = 20;
    float decimal = 26.06;
    double decLong = 26.062004062004f;
    char character = 's';
    _Bool boolean = 1;
    printf("The 5 data types I have learn are integers e.g %i, floating numbers e.g %f, double e.g. %e, character e.g. %c and boolean e.g. %i.\n", age,decimal,decLong,character,boolean);
}
/*observe that i didn't return anything
Also, %g can be used for double, however, it trims the double up to 3 decimal places according to my observation.*/
