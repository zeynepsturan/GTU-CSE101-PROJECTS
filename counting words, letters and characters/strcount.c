/*
    the program that counts characters,
    letters and words in the given text
    written by zeynepsturan
*/

#include <stdio.h>
int main(){
    int LetterCount(char array[]),CharacterCount(char array[]),WordCount(char array[]);

    char text[100];
    int i=0;
    char c;

    printf("Welcome to the string count program\n");
    printf("Please enter your text belove:\n");

    for(;(c=getchar())!='\n' && i<99;i++){
        text[i]=c;
    }

    text[i]='\0';

    printf("\n");
    printf("letters:    %3d\n",LetterCount(text));
    printf("words:      %3d\n",WordCount(text));
    printf("characters: %3d\n",CharacterCount(text));



    return 0;
}

int LetterCount(char array[]){

    int count=0;

    for(int i=0;array[i]!='\0';i++){

        if((array[i]>='a' && array[i]<='z') || (array[i]>='A' && array[i]<='Z')){
            count++;
        }
    }

    return count;
}

int CharacterCount(char array[]){

    int count=0;

    for(int i=0;array[i]!='\0';i++){
        count++;
    }

    return count;
}

int WordCount(char array[]){
    int count=0;

    for(int i=0;array[i]!='\0';i++){
        if(
        ( (array[i]>='a' && array[i]<='z') || (array[i]>='A' && array[i]<='Z')
        || (array[i]>='0' && array[i]<='9' ) )&& 
        (array[i+1]==' ' ||array[i+1]=='.' || array[i+1]=='\0'))
        {
            count++;
        }// if array[i] is a letter or a number and array[i+1] is space or point or end of the array
        //it is count as a word

        if((array[i]>='0' && array[i]<='9' ) && (array[i+1]=='.') && (array[i+2]>='0' && array[i+2]<='9' )){
            count--;
        } //this condition is for float numbers
    }

    return count;

}
