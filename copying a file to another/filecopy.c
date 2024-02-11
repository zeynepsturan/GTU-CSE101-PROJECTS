#include <stdio.h>
int main(){
    FILE *ptrin;
    FILE *ptrout;
    ptrin=fopen("text1.txt","r");
    ptrout=fopen("text2.txt","w");
    if(ptrin==NULL && ptrout==NULL){
        printf("Error opening both files\n");
    }
    
    else if(ptrin==NULL){
        printf("Error opening the first file\n");
    }

    else if(ptrout==NULL){
        printf("Error opening the second file\n");
    }

    else{
        printf("File is being copied..\n");
        char c;
        while((c=fgetc(ptrin))!=EOF){
            fputc(c,ptrout);
        }
        printf("Copying process is done.\n");
        fclose(ptrin);
        fclose(ptrout);
    }
    return 0;
    
}
