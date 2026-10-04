#include<stdio.h>


int main(){
int choice ;
	printf("Enter you choice \n 1. Greeting  \n 2. Study  \n 3. Weather \n 4. Help ");
	scanf ("%d",&choice);
	switch (choice){
	    case 1 :
			printf ("Hello, How are you, Goodbye");
			break ;
		case 2 :
			printf ("Programming, Mathematics, AI");
			break ;
		case 3 :
			printf ("Today, Tomorrow, Forecast");
			break ;
		case 4 :
			printf ("About Chatbot, Commands, Exit");
			break ;
		default :
			printf("Invalid choice");
	}
	
}
