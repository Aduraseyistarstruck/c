#include <stdio.h>
int main(void){
    char letter;
    printf("ENTER YOUR LETTER: ");
    scanf("%c", &letter);
    if (letter == 'A'){
        printf("Welcome Aduraseyi");
    }
    //Welcome Aduraseyi is printed if the letter is A
    // char words[50];  you have to declare a size if you are predefining only
    // char words[] = "Aduris";
    // printf("Enter your name: ");
    // scanf("%s",&words);
    // printf("%s",words[]);
    //visual studio code might bring errors even when there's no error, simply close terminal and try running again.

    return 0;
}