/*
    the program creates an acronym using the
    first letters of the words in the given text
    written by zeynepsturan
*/

#include <stdio.h>
int WordCount(char array[]);
void Acronym(char array[]);
int main(){
    char text[100];
    char c;
    int i=0;
    printf("Welcome to the acronym program\n");
    printf("Please enter your text belove:\n");

    for(;(c=getchar())!='\n' && i<99;i++){
        text[i]=c;
    }
    text[i]='\0';

    Acronym(text);
    
    return 0;
}

int WordCount(char array[]){
    int count=0;

    for(int i=0;array[i]!='\0';i++){
        if(
        ( (array[i]>='a' && array[i]<='z') || (array[i]>='A' && array[i]<='Z') )
        && 
        (array[i+1]==' ' ||array[i+1]=='.' || array[i+1]=='\0'))
        {
            count++;
        }// if array[i] is a letter and array[i+1] is space or point or end of the array
        //it is count as a word

    }

    return count;
}

void Acronym(char array[]){
    int wordcount=WordCount(array);
    char acronym[wordcount];
    int j,i;
    if((array[0]>='a' && array[0]<='z') || (array[0]>='A' && array[0]<='Z')){
        acronym[0]=array[0];
        j=1;
        i=1;
    }

    else{
        j=0;
        i=0;
    }

    for(;array[i]!='\0' && j<wordcount;i++){
        if(
        (array[i]==' ' ||array[i]=='.') && 
        ( (array[i+1]>='a' && array[i+1]<='z') || (array[i+1]>='A' && array[i+1]<='Z') )){
            acronym[j]=array[i+1];
            j++;
        }
    }
    acronym[wordcount]='\0';


    printf("Your acronym: %s",acronym);
}
