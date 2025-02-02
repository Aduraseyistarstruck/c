#include <stdio.h>
float max(float firstSide, float secondSide); /*function prototype or
declaration*/
int main () // main function
{
float firstSide, secondSide;
float answer;
printf("Enter the value for the first number: ");
scanf("%f", &firstSide);
printf ("Enter the value for the second number: ");
scanf ("%f", &secondSide);
answer=max (firstSide, secondSide); //calling a function to get maximum value
printf ("The maximum value is %f\n", answer);
return 0;
}
float max(float firstSide, float secondSide) // function definition
{
if (firstSide > secondSide)
return firstSide;
else
return secondSide;
}