/* Program to calculate the sum of first supplied natural numbers
Introduction of the for statement
*/
#include <stdio.h>
int main (void)
{
int sum, number,sumer;
sum = 0;
printf ("How many numbers do you want? ");
scanf ("%i", &number);
for ( int counter = 1; counter <= number; counter = counter + 1 )
sum = sum + counter;
//sume = sume + counter;//proof that when a for loop is without curly bracelets it will work for only one line. 
sumer = sum+0;
printf("Lemme know now\n");
printf("Are you in the loop block\n");
printf ("The sum of %i natural numbers is %i %i\n", number, sum, sumer);
return 0;
}
//always assign a value to a variable before printing, else, you will see some unpredictable results.