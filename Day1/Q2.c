#include <stdio.h>
int main(void){
int num;
printf("Enter your mark ");
scanf("%d",&num);
printf(" You entered %d", num); 

	if(num >= 90 && num <=100){
	printf(" You got A grade"); 
		}
	else if ( num >=75 && num<=89){ 
		printf(" You got B grade");
		}
	else if ( num >=60 && num<= 74){
		printf(" You got C grade");
		}
	else if ( num >= 50 && num <= 59){
		printf(" You got D grade");
		}
    else if (num>= 0 && num <=49){
        printf(" You got F grade");
    }
return 0;
}