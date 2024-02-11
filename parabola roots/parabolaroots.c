/*
    the program that calculates the real roots 
    of a parabola if they exist
    written by zeynepsturan
*/
#include <stdio.h>
#include <math.h>
int Discriminant(float a,float b,float c);
void Parabola(float a, float b, float c);
float a,b,c;
int main(void){

    printf("PARABOLA ROOTS CALCULATING PROGRAM\n");
    printf("----------------------------------\n");
    printf("for the parabola ax^2 + bx + c = 0\n");
    printf("please enter the coefficients\n");
    printf("a:");
    scanf("%f",&a);
    printf("\nb:");
    scanf("%f",&b);
    printf("\nc:");
    scanf("%f",&c);
    Parabola(a,b,c);

    return 0;
}
int Discriminant(float a,float b,float c){
    int result=b*b-4*a*c;
    return result;
}



void Parabola(float a,float b,float c){
    if(a==0){
        printf("ERROR:This is not a parabola");
    }

    else{
        printf("\n%gx^2 + %gx + %g = 0\n",a,b,c);
        int delta=Discriminant(a,b,c);
        if(delta>=0){
            float root1=(-b+sqrt(delta))/2*a;
            float root2=(-b-sqrt(delta))/2*a;
            if(root1==root2){
                printf("the only root of the parabola is %g",root1);
            }

            else{
                printf("roots of the parabola are %g and %g",root1,root2);
            }
        
        }

        else{
            printf("The equation has no real roots.");
        }
    }
}


