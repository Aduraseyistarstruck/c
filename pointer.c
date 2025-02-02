// More on pointers
#include <stdio.h>
int main (void)
{
int i1, i2;
int *p1, *p2, *p3;
i1 = 5;
p1 = &i1;
i2 = *p1 / 2 + 10;
p2 = p1;
p3 = &i2;
printf ("i1 = %i, i2 = %i, *p1 = %i, *p2 = %i, *p3 = %i\n", i1, i2, *p1, *p2, *p3);/*after proper pointer initialization and definition, 
when * is before a pointer, values are either accessed or to be modified */
printf("pointer1 memory: %i pointer2 memory: %i pointer3 memory: %i",p1,p2,p3);//upon proper initialization, when there is no *, the memory is concerned.
return 0;
}