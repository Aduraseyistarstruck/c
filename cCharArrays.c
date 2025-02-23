#include <stdio.h>
int main(){
    char string[] = {'H','e','l','l','o','.'};
    for (int i = 0; i<6 ;++i){
        printf("%c",string[i]);
    }
    printf("\n");
    printf(" EASY METHOD: %s\n",string);
    /*what differentiate a string from a char in c is the null (0) character.
    
    We can also assign a string character by character. But we should remember to set the end character as ‘\0’ which is a null character.

    char str[14] = { 'G','e','e','k','s','f','o','r','G','e','e','k','s','\0'};*/
    char value[] = "Hello World";
    printf("%s\n",value);
    printf("\n");
    return 0;
}