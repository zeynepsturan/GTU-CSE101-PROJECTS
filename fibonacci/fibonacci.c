#include <stdio.h>
int main(){
	int term;
	printf("Please enter which term of fibonacci sequence you want to get: ");
	scanf("%d",&term);

	int num1,num2,temp;
	num1=num2=1;
	temp=0;

	if(term<=0){
		printf("ERROR:The Fibonacci sequence starts from 1.\n\n");
	}

	else if(term==1 || term==2){
		printf("1\n\n");
	}

	else{
		for(int i=0;i<term-2;i++){
			temp=num2;
			num2=num1+num2;
			num1=temp;
		}
    
		printf("Thw %d. term of the sequence= %d\n\n",term,num2);
	}
	return 0;
}
