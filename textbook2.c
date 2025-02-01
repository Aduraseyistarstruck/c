#include <stdio.h>
int main (void)
{
int i, n;
printf ("This program prints a table of squares. \n");
printf ("Enter number of entries in table: ");
scanf ("%d", &n);
i = 1;
while (i <= n) {
printf ("%10d%10d\n", i, i * i);
i++;
}
int v = 0%2;
printf("%d \n", v);
return 0;
}