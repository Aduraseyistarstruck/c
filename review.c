#include <stdio.h>
int main(void){
    char name[50];//for predefined without initializing, specify a width, width may be larger than input
    char message[] = "Welcome Once again";//for initializing and defining, you may omit width
    printf("Enter your Name: ");
    scanf("%s", &name);
    printf("Welcome %s, It's so good to have you here.\n%s", name,message);
    return 0;
}