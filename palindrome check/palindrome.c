/*
    the program that checks whether the given 
    number is a palindrome or not
    written by:zeynepsturan

*/

#include <stdio.h>
#include <math.h>

int Digit(int num);
int PalindromeCheck(int num); //function declarations

int main(){
    int status;
    int number;
    printf("Welcome To The Palindrome Check Program\n");
    printf("You can exit from the program with pressing 0\n");
    while(1){
        printf("Please enter a positive intiger: ");

         if((scanf("%d",&number))==1 &&number>=0){

            if(number==0){
            printf("Exited from the program");
            return 0;
            }

            status=PalindromeCheck(number);

            if(status==1){
                printf("\n%d is a palindrome",number);
            }

            else{
                printf("\n%d is not a palindrome",number);
            }
    
        }

        else{
            printf("ERROR:What You Entered Is Not A Positive Intiger");
        }

        printf("\n\n");
    }

    return 0;
}

//function definitions

int Digit(int num){
    int digit=1;
    while(num/10>=1){
        num/=10;
        digit++;
    }
    return digit;

}

int PalindromeCheck(int num){
    int reversed=0;
    int temp=num;
    int digit=Digit(num);

    while(digit>0){
        reversed+=temp%10*pow(10,digit-1);
        temp=temp/10;
        digit--;
    }

    if(reversed==num){
        return 1;
    }

    else {
        return 0;
    }
     
}
