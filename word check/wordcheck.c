/*
    the program that checks whether the 
    given word exist in the text or not
    written by: zeynepsturan
*/

#include <stdio.h>
#include <string.h>
int WordCheck(char array[],char word[]); //function declaration
int main(){

    char text[50]="pen apple, flower banana book computer's letter.";
    char keyword[20];

    printf("Welcome to the keyword check program.\nHere is the text:%s",text);

    printf("\n\nplease enter your word:");
    scanf("%s",keyword);

    int flag=WordCheck(text,keyword);

    if(flag==0){
        printf("%s exists in the text\n",keyword);
    }

    else{
        printf("%s doesn't exist in the text\n",keyword);
    }
    return 0;
}

//function definition
int WordCheck(char array[],char word[]){

    int size=strlen(word);

    for(int i=0;array[i]!='\0';i++){

        if(array[i]==word[0]){

            for(int j=1;j<size;j++){
                
                if(array[i+j]!=word[j]){
                    break;
                }

                if(j==size-1 && //this part is to check if the keyword is really a word in the text, not just a
                //part of a some word in the text
                (array[i+j+1]==' '|| array[i+j+1]=='\'' || array[i+j+1]=='s'
                ||array[i+j+1]=='.' || array[i+j+1]=='\0' || array[i+j+1]==',' || array[i+j+1]==';' || 
                array[i+j+1]==':')){

                    return 0;
                }
            }
        }
    }
    return 1;
}
