#include <stdio.h>
#include "string_methods.h"
#define WORD 30
#define LINE 256

int main(){
    char ch;
    char text[WORD];
    getWords(text);
    
    scanf(" %c", &ch);
    if (ch == 'a'){
        print_lines(text);
    }else if (ch == 'b'){
        print_similar_words(text);
    }else {
        printf("Input error, Command %c isn't recognized", ch);
    }

    return 0;
}
