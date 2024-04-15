#include <stdio.h>
int main(){
	int number,temp,question;
	long factorial;
		do{
  		printf("please enter a positive intiger: ");
  		scanf("%d",&number);
  
  		printf("\n");
  		temp=number;
  		factorial=1;
		  if(number<0){
			  printf("ERROR:YOU ENTERED A NEGATIVE NUMBER");
		  }

		  else{
  			while(temp>0){
  				factorial=factorial*temp;
  				temp--;
			  }
		  }

  		printf("%d!=%li\n",number,factorial);
  		printf("PRESS 0 TO END OR PRESS 1 TO CALCULATE AGAIN");
  		scanf("%d",&question);
  		printf("\n");
      
		}while(question==1);
  return 0;
}

			

			

		

	

	

	
