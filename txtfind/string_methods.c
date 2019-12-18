
#include <stdio.h>
//#include "string_methods.h"
#define LINE 256
#define WORD 30


int getLine(char s[]){
    int i ; int j;
    char ch;
    for (j = 0, i =0; (ch!='\n' && (ch=getchar())!=EOF); i++)
    {
        if (i < LINE-1) s[j++] =ch;
    }
    if (ch == '\n'){
        if (i<= LINE-1){
            s[j++] = ch;
        }
        i++;
    }
    s[j] = '\0';
    return i;
    
}
//number of words 
int getWords(char w[]){
    char ch;
    int i; int j;
    for ( i = 0, j = 0 ;(ch = getchar())!= EOF &&ch!= ' ' && 
            ch!= '\t' && ch!= '\n'  ; i++)
    {
        if (i < WORD-1){
            w[j++] = ch;
        }
    }
    w[j] = '\0';
    return i;
    
}

int substring(char *str1, char *str2){
    char *ptr1 = str1;
    char *ptr2 = str2;

    while ( *ptr2 != '\0' && *ptr1 != '\0' ) {// until end of a string
        while (*ptr1 == *ptr2)
        {
            ptr1++;
            ptr2++;
        }
        if (*ptr2 == '\0'){
            return 1;
        }
        ptr2 = str2;
        ptr1++;
    }
    return 0;
        
}

