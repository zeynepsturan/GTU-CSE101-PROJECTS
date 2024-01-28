/*
    the program that does the modulo operation
    without using the <math.h> library
    written by:zeynepsturan
*/

#include <stdio.h>

int main(void){
    long a,b,division,modd;
    
    printf("Please enter the divided number:");
    scanf("%li",&a);

    printf("\nPlease enter the division:");
    scanf("%li",&b);

    division=a/b;  
    modd=a-(division*b);

    printf("\n\n%li %% %li = %li",a,b,modd);

    return 0;
}
