/* Program to calculate the sum of first supplied natural numbers
Introduction of the for statement
*/
#include <stdio.h>
int main (void)
{
int sum, number;
sum = 0;
printf ("How many numbers do you want? ");
scanf ("%i", &number);
for ( int counter = 1; counter <= number; counter = counter + 1 ) {
    sum = sum + counter;
    printf("Lemme know\n");
}
printf ("The sum of %i natural numbers is %i\n", number, sum);
return 0;
}
