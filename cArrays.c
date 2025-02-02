//Program to stores five numbers and add them up
#include <stdio.h>
int main (void)
{
int array_values[5] = { 1,2,3,4,5};
int sum=0;
for ( int i = 0; i < 5; ++i )
sum = sum + array_values[i];
printf ("Sum is %i\n", sum);

//creating an array without specifying number of elements
int array_values1[] = {5,4,3,2,1};
int sume=0;
for ( int i = 0; i < 5; ++i )
sume = sume + array_values[i];
printf ("Second sum is %i\n", sume);
return 0;
}