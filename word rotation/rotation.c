/*
    the program that rotates the
    letters of the given word
    written by zeynepsturan
*/
#include <stdio.h>
#include <string.h>
int main(){

    char word[11];
    char temp;

    printf("please enter your word up to ten letters:\n");
    scanf("%s",&word);

    int size=strlen(word);

    for(int j=0;j<size;j++){

        temp=word[0];

        for(int i=1;i<=size-1;i++){

            int j=i-1;
            word[j]=word[i];
        }

        word[size-1]=temp;
        printf("%s\n",word);
    }
    
    return 0;
}
