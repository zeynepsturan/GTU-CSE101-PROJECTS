/*
    the program that counts the letters 
    of the given text without using
    already existing functions
    written by:zeynepsturan
*/
#include <stdio.h>
int main(){
    char text[100];
    int count=0;
    char c;
    printf("Welcome to the letter counting program\n");
    printf("Please enter your text belove:\n");
    int i=0;
    for(;(c=getchar())!='\n' && i<99;i++){
        text[i]=c;
    }
    text[i]='\0'; //to initialize where the string ends

    for(int i=0;text[i]!='\0';i++){
        if((text[i]>='a' && text[i]<='z') || (text[i]>='A' && text[i]<='Z')){
            count++;
        }

    }

    printf("The count of letters in your text is %d\n",count);

}
