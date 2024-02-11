/*
    the program that changes lower case letters
    into upper case letters and visa versa
    written by zeynepsturan
*/
#include <stdio.h>
#include <string.h>
void LetterTransform(char *array);
int main(){
    char text[100];
    char c;
    printf("Please enter your text belove:\n");
    int i=0;
    for(;i<99 && (c=getchar())!='\n';i++){
        text[i]=c;
    }
    text[i]='\0';
    LetterTransform(text);
    puts(text);
    return 0;
}
void LetterTransform(char *array){
    int size=strlen(array);
    for(int i=0;i<size;i++){
        if(array[i]>='a' && array[i]<='z'){
            array[i]-=32;
        }

        else if(array[i]>='A' && array[i]<='Z'){
            array[i]+=32;
        }
    }
}
