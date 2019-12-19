#include <string.h>
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

int isEOF(int b){
  static int eof = 0;
  if(b)
    eof = 1;
  return eof;
}

//number of words 
int getWords(char w[]){
    int i = 0;
    char ch=' ';
    while(ch== '\0' || ch == ' ' || ch== '\t' || ch== '\n' ) {
        if((ch=getchar()) == EOF){
            return -1;
        }
    }
    while(ch!= ' ' && ch!= '\t' && 
          ch!= '\n' && ch!= '\0' && i < WORD -1) {
            *(w+(i++)) = ch;
            ch= getchar();
    }
    *(w+i) = '\0';

    if(ch== EOF){
        return -1;
    }
    return i-1;
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

void print_lines(char *str){
    char line[LINE];
    while (getLine(line)){
        if (substring(line, str)){
            puts(line);
        }
    }
    
}

int similiar(char *s, char *t, int n){
    // int s_length = strlen(s);
    // int t_length = strlen(t);
    if (n<0) return 0;
    //if(s_length <= t_length ) return 0;
    int i = 0;

    while (*s != '\0' && i<(n+1)){
        if (*t != *s){
            i++;
        }else {
            t++;
        }
        s++;
    }
    if (i <(n+1) && *s == '\0' && *t== '\0') {
        return 1;
    }
    else return 0;
  
}

void print_similar_words(char *str){
   	// int len;
	// while(len != EOF){
	// 	char word[WORD];
	// 	len = getWords(word);
	// 	if ((similiar(word, str, 0) || similiar(word,str,1)) && len > 0){
	// 		printf("%s\n", word);
	// 	}
	// }
    int lent;
  do {
    char word[WORD];
    lent = getWords(word);
    if(lent > 0 && (similiar(word, str, 0) || similiar(word, str, 1)))
      printf("%s\n", word);

  } while(lent != EOF);
    
}

