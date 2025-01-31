#include <stdio.h>
int main(){
    printf("\a This is the message that we have heard of him\n");
    printf("Name \t Matric_No \t Department \t Course_Code \nAduris \t 0001 \t \t Cmp \t \t 201 \n");

    //inserting tab spaces before printing formatted strings...
    printf("%6d, %4d\n", 86, 1040);
    printf("%12.5e\n", 30.253);
    printf("%.4f\n", 83.172);
    printf ("%-6.2g\n", 0.0000009979);//note if you copy a code from the man's pdf, his " is not correct. Delete and rewrite it.

    printf("\n \t \t \"Hello Aduris\"\n");
    printf("\aEnter the four numbers below(int int float float):\n");
    int one, two, i,j;
    float three, four,x;

    scanf("%d %d %f %f", &one, &two, &three, &four); //separate the ampersands and values(&one) with comma before writing another one
    printf("The values are %d %d %f %f\n", one, two, three, four); //same comment above applies here.
    //when an integer is supplied to a float value, the value becomes a float e.g. -3 becomes -3.000000

//accepting input of a fraction
    printf("\n \n Lemme add two fractions you will be supplying for you.");
    printf("\aInput the fraction below in this format \"a/b.\" With a being the numerator and b being the denominator.\nEnter first fraction: ");
    int num1, denom1, num2, denom2, resnum, resdenom;
    scanf("%d/%d", &num1, &denom1);//if print or scanf comes after scanf function call, it will fall on a newline. Don't add it to avoid complications.
    printf("\aEnter the second fraction: ");
    scanf("%d/%d", &num2, &denom2);
    resnum = (denom1 * num2) + (denom2 * num1);
    resdenom = denom1 * denom2;
    printf("The sum of %d/%d and %d/%d is %d/%d\nPlease note that answer is not simplified to lowest term.\n", num1, denom1, num2, denom2, resnum, resdenom);
}
