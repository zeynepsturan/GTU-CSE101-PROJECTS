//simple calculator program (detaily explained)
//written by zeynepsturan

//decleration of the functions
void addition(),subtraction(),multiplication(),division();
void exponention(),average(),maximum_value();

float number1,number2,result; //some necessary variables to use in the functions

#include <stdio.h> //tells compiler to read the code using the standart library for C languge
int main() { //program starts
    int operation;

    //welcoming menu (is only shown once)
    printf("%%%%  \t\tCALCULATOR MACHINE\t   %%%%\n");
    printf("%%%% PLEASE SELECT FROM THE FOLLOWING  %%%%");

    //operation menu(is shown every time before choosing an operation)
    do{
        printf("\n%%%% MENU :\n");
        printf("(1) ADD TWO NUMBERS\n");
        printf("(2) SUBTRACT TWO NUMBERS\n");
        printf("(3) MULTIPLY TWO NUMBERS\n");
        printf("(4) DIVIDE TWO NUMBERS\n");
        printf("(5) TAKE THE NTH POWER OF A NUMBER\n");
        printf("(6) FIND THE AVERAGE OF THE NUMBERS INPUTTED\n");
        printf("(7) FIND THE MAXIMUM OF THE NUMBERS INPUTTED\n");
        printf("(0) EXIT\n");
        printf("PLEASE SELECT: ");
        scanf("%d",&operation); //choice of the user
        printf("\n");

        switch(operation){ //commands for all operation values
            case 1:
            // addition of two numbers
            addition();
            break;

            case 2:
            // substraction of two numbers
            subtraction();
            break;

            case 3:
            // product of two numbers
            multiplication();
            break;

            case 4:
            // division of two numbers
            division();
            break;

            case 5:
            // taking the power of a number
            exponention();
            break;

            case 6:
            // finding the average of all the numbers entered
            average();
            break;

            case 7:
            // finding the maximum of all the numbers entered
            maximum_value();
            break;
            
            case 0:
            //do nothing and break out of the loop
            break;

            default:
            //if the value of operation anything else than 0-7
            printf("ERROR: YOU ENTERED AN UNVALID OPERATION");
            break;
            }

        printf("\n");
    }while(operation!=0);
    printf("Exited from the calculator");
    return 0; //program is finished
}

//all the function definitions
//NOTE: %g placeholder is used for remove the extra zeros after the decimal point
void addition(){
    printf("Please enter the first number: ");
    scanf("%f",&number1);       //it takes a float input from the user and assign to number1 variable.
    printf("Please enter the second number: ");
    scanf("%f",&number2);      //it takes a float input from the user and assign to number2 variable.
    result= number1+number2;  //sums up the values of number1 and number2 and assignes to result variable.
    printf("%g + %g = %g",number1,number2,result); //prints the value of result variable on the screen.
}

void subtraction(){
    printf("Please enter the first number: ");
    scanf("%f",&number1);     //it takes a float input from the user and assign to number1 variable.
    printf("Please enter the second number: ");
    scanf("%f",&number2);     //it takes a float input from the user and assign to number2 variable.
    result= number1-number2;  //subtracts number2 from number1 and assignes to result variable.
    printf("%g - %g = %g",number1,number2,result); //prints the value of result variable on the screen.
}

void multiplication(){
    printf("Please enter the first number: ");
    scanf("%f",&number1);       //it takes a float input from the user and assign to number1 variable.
    printf("Please enter the second number: ");
    scanf("%f",&number2);       //it takes a float input from the user and assign to number2 variable.
    result= number1*number2;   //multiplies the values of number1 and number2 then assignes to result variable.
    printf("%g x %g = %g",number1,number2,result); //prints the value of result variable on the screen.
}

void division(){
    printf("Please enter the divided number: ");
    scanf("%f",&number1);    //it takes a float input from the user and assign to number1 variable.
    printf("Please enter the divisor: ");
    scanf("%f",&number2);    //it takes a float input from the user and assign to number2 variable.
    if(number2==0){
        printf("ERROR:DIVIDER CANNOT BE 0"); //if the denominator is 0, then it is undefined and gives error.
    }

    else{
        result= number1 / number2; //divides number1 to number2 and assignes to result variable.
        printf("%g / %g = %g",number1,number2,result); //prints the value of result variable on the screen.
    }

}

void exponention(){
    float base;
    int power; //the program can only take integer powers.
    result=1;    //1 is the identity property of multiplication.
    printf("Please enter the base: ");
    scanf("%f",&base); //the base number is taken from the user and assigned to base variable.
    printf("\nPlease enter the power: ");
    scanf("%d",&power); //the exponent is taken from the user and assigned to power variable.

    if(base==0 && power==0){
        printf("ERROR:0^0 IS UNDEFINED");
    }
    
    else{

        if(power>=0){
            for(int i=0;i<power;i++){
                result*=base;
            } //result is multiplied with the base i times.
        }

        else{
            for(int i=0;i>power;i--){
                result*=1/base;
            } //result is multiplied with the 1/base i times.
        }
        printf("%g ^ %d = %g",base,power,result); //prints the value of result variable on the screen. 

    }
}

void average(){ //while ı düzenle
    int term;
    float sum,number;
    sum=term=0;  //default values for the variables
    char c;
    do{
        printf("\nPlease enter a number or press q to quit: "); 
        scanf("%f",&number); //takes a float input from the user and assign to number variable.
        sum += number; //adds the inputted number to sum variable every time to find the sum of the all numbers
        term++; //counts how many number is inputted
        c=getchar();
    }while(c!='q');
    result= (sum-number) / (term-1);  //calculates the average of numbers and assigns to result variable
    printf("the average of the numbers you entered is: %g",result); //prints the value of result variable on the screen.
}

void maximum_value(){ //while ı düzenle
    float number,max;
    char c;
    printf("Please enter a number: ");
    scanf("%f",&number); //takes a float input from the user and assign to number variable.
    max=number; //first inputted number gets assigned to max variable
    printf("\n");
    do{
        printf("Please enter a number or press q to quit: ");
        scanf("%f",&number); //takes a new float input from the user and assign to number variable.
        if(number>max){
            max=number; 
            //if the new inputted number is greater than the max, new inputted number is the max value from now on
        }
        c=getchar();
    }while(c!='q');
    printf("the maximum value you entered: %g",max); //prints the value of max variable on the screen.
}



