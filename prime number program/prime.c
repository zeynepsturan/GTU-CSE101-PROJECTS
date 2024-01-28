/*
    a program to check whether a number is prime or not,
    or to get prime numbers as many wanted
    written by zeynepsturan
*/
#include <stdio.h>
#include <math.h>
int CheckPrime(int num);
void GetPrime(),NthPrime(); //declaration of the functions
int main(){
    int primeStatus;
    int option;
    int number;
    do{
        printf("\n\t---------------------------------------------------------------\n\n");
        printf("\t\tWelcome to the Prime Number Program\n");
        printf("\t\tselect from the belove\n");
        printf("\t\tPress 1 to check if a number is prime\n");
        printf("\t\tPress 2 to get prime numbers as many as you want\n");
        printf("\t\tPress 3 to get the nth prime number\n");
        printf("\t\tPress 0 to quit\n");
        printf("\t\tChoice: ");
        scanf("%d",&option);
        printf("\n");
        
        switch(option){
            case 0:
            break;

            case 1:
            printf("\t\tPlease enter a positive integer: ");
            
            if(scanf("%d",&number)!=1){
                printf("\t\tError:What you entered is not an intiger");
            }
            else{
                primeStatus=CheckPrime(number);
                switch(primeStatus){
                    case -1:
                    printf("\t\tError:The intiger you entered is not positive");
                    break;

                    case 0:
                    printf("\t\t%d is not a prime number",number);
                    break;

                    case 1:
                    printf("\t\t%d is a prime number",number);
                    break;


                }
            }
            break;

            case 2:
            GetPrime();
            break;

            case 3:
            NthPrime();
            break;

            default:
            printf("\t\tERROR:UNVALID OPTION");
            break;
        }
        printf("\n");
    }while(option!=0);
    return 0;
}

// definition of functions

int CheckPrime(int num){
    int check;
    
    if(num<=0){
        return -1;
    }

    else{
        check=0;
        if(num==2 || num==3){
            return 1;
        }

        else{
            for(int i=2;i<=sqrt(num);i++){
                if(num%i==0){
                    check=0;
                    break;
                }

                else{
                    check=1;
                }
            }

            if(check==1){
                return 1;
            }

            else{
            return 0; 
            }
        }
        
    }
}

void GetPrime(){
    int count;
    int number=2;
    int primeStatus;
    printf("\t\tPlease enter how many prime numbers you want\n");
    printf("\t\t(The larger the number you enter, the slower\n\t\tthe program gets)\n");
    printf("\t\tNumber of prime numbers:");
    if((scanf("%d",&count)==1) && count>=1){
        for(int k=0;k<count;){     
            
            primeStatus=CheckPrime(number);

            if(primeStatus==1){
            printf("\t\t%10d.\t %d\n",k+1,number);
            k++;
            }

            number++;
        }
    }
}

void NthPrime(){
    int count;
    int number=2;
    int primeStatus;
    int nthprime;
    printf("\t\tPlease enter the nth prime number you want\n");
    printf("\t\t(The larger the number you enter, the slower\n\t\tthe program gets)\n");
    printf("\t\tThe nth prime number:");
    if((scanf("%d",&count)==1) && count>=1){
        for(int k=0;k<count;){
            
            primeStatus=CheckPrime(number);

            if(primeStatus==1){
            nthprime=number;
            k++;
            }

            number++;
        }
        printf("\t\t%d. prime number is %d",count,nthprime);
    }
}
